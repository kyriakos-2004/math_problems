#include <iostream>

void
raise(uint64_t F[][3], int n)
{
    uint64_t arr[3][3] = { {1,1,0},{1,0,0},{0,1,0} };
    uint64_t tmp[3][3] = { {0} };
    static int c = 1;

    for (int h = 0; h < n - 3; h++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (c == 1)
                    {
                        tmp[i][j] += arr[i][k] * arr[k][j];
                    }
                    else
                    {
                        tmp[i][j] += F[i][k] * arr[k][j];
                    }
                }
            }
        }
        
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                F[i][j] = 0;
            }
        }
                
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                F[i][j] = tmp[i][j];
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                tmp[i][j] = 0;
            }
        }

        c = 2;
    }
}

uint64_t
nth_fibbonacci(int n)
{
    uint64_t fib[3][3] = { {1,1,0},{1,0,0},{0,1,0} };
    
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        raise(fib, n);
        return fib[0][0] + fib[0][1];
    }
}

int main()
{
    int n = 0;
    std::cout << "Which Fibonacci term are you looking for?\n";
    std::cout << "Enter 0 to exit: ";
    while (std::cin >> n && !(n <= 0))
    {
        std::cout << nth_fibbonacci(n) << std::endl;
        std::cout << "What's next? ";
    }

    return 0;
}