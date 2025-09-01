#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int main()
{
	std::time_t now = std::time(0);
	printf("%ld\n", now);

	std::tm* timeinfo = std::localtime(&now);
	// printf("%d\n", (timeinfo->tm_year + 1900));
	std::cout << std::setw(2) <<(timeinfo->tm_year + 1900) << std::endl;
	std::cout << std::setfill('0') << std::setw(2) << (timeinfo->tm_mday) << std::endl;
}