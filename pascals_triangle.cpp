#include<iostream>
#include<iomanip>

using namespace std;

uint64_t
factorial(uint64_t x)
{
    uint64_t fact = 1;

    for (x; x > 1; x--)
    {
        fact *= x;
    }

    return fact;
}
uint64_t
combinationCoefficient(uint64_t n, uint64_t r)
{
    uint64_t nume = 1, i;

    for (i = n; i > r; i--)
    {
        nume *= i;
    }

    return uint64_t(nume / factorial(n - r));
}

void
generatePascalsTriangle(uint64_t n)
{
    for (uint64_t i = 0; i < n; i++)
    {
        for (uint64_t j = 0; j < (n - i - 1); j++)
        {
            cout << setw(3) << " ";
        }

        for (uint64_t j = 0; j < (i + 1); j++)
        {
            cout << setw(3) << combinationCoefficient(i, j) << setw(3) << " ";
        }

        cout << "\n";
    }
}

int
main()
{
    uint64_t n;
    cout << "Enter Number of lines: ";
    cin >> n;
    generatePascalsTriangle(n);
}
