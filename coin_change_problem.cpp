#include <iostream>
#include <vector>

int 
count(std::vector<int> denominations, int denom, int sum)
{
	if (sum == 0)
	{
		return 1;
	}

	if (sum < 0 || denom <= 0)
	{
		return 0;
	}

	return count(denominations, denom - 1, sum) +
		   count(denominations, denom, sum - denominations[denom - 1]);
}

int main()
{
	std::vector<int> denominations = { 1, 2, 5, 10, 20, 50 };
	int sum = 3;

	std::cout << " " << count(denominations, denominations.size(), sum);

	return 0;
}
