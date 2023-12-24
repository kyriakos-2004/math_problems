#include <iostream>
#include <vector>
#include <math.h>
#include <set>

bool 
isprime(int n)
{
	bool prime = true;

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			prime = false;
			break;
		}
	}

	return prime;
}

int
main()
{
	std::vector<int> arr;
	std::set<int> primefactors;

	int num;
	std::cin >> num;

	for (int i = 2; i < num; i++)
	{
		if (isprime(i))
		{
			arr.push_back(i);
		}
	}

	for (int i = 0; i < arr.size(); i++)
	{
		std::vector<int>::iterator it = std::find(arr.begin(), arr.end(), (num / arr[i]));

		if (it!=arr.end())
		{
			if (arr[i] * (num / arr[i]) == num)
			{
				primefactors.insert(arr[i]);
				primefactors.insert(num / arr[i]);
			}
		}
	}

	if (primefactors.empty())
	{
		std::cout << "The number " << num <<" cannot be factorized into prime numbers";
	}
	else
	{
		//If output is only one number it means (number^2)
		for (int j : primefactors)
		{
			std::cout << j << " ";
		}
	}

	return 0;
}