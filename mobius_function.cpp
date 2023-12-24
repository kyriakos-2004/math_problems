#include <iostream>
#include <cmath>

int 
moebius(int inputnum)
{
	int prime = 0;

	if (inputnum % 2 == 0)
	{
		inputnum = inputnum / 2;
		prime++;

		if (inputnum % 2 == 0)
		{
			return 0;
		}
	}

	for (int i = 3; i <= sqrt(inputnum); i = i + 2)
	{
		if (inputnum % i == 0)
		{
			inputnum = inputnum / i;
			prime++;

			if (inputnum % i == 0)
			{
				return 0;
			}
		}
	}

	return prime % 2 == 0 ? -1 : 1;
}

int 
main()
{
	int inputnum = 1;
	while (inputnum != 0)
	{
		std::cout << "Calculate the Moebius function for any number, 0 to exit: \n";
		std::cin >> inputnum;
		std::cout << "Moebius function for " << inputnum << " is: " << moebius(inputnum) << "\n";
	}
}
