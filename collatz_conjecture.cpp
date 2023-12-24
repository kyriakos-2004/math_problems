#include <iostream>

int
main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	long long int  n;
	std::cin >> n;
	int steps = 0;
	
	if (n == 1)
	{
		std::cout << steps++;
	}
	else
	{
		for (; n != 1;)
		{
			if (n % 2 == 0)
			{
				n /= 2;
			}
			else
			{
				n = 3 * n + 1;
			}
			steps++;
		}
		std::cout << steps;
	}
	 
	return 0;
}