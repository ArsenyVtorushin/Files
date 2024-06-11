#include "PrintToConsole.hpp"

void PrintToConsole(std::string nameArr[], std::string amountArr[], std::string priceArr[])
{
	std::cout << "\n\n" << std::right
		<< std::setw(2) << "ID"
		<< std::setw(25) << "Название"
		<< std::setw(11) << "Количество"
		<< std::setw(5) << "Цена\n\n";

	for (int i = 0; i < 3; i++)
	{
		std::cout << std::right
			<< std::setw(2) << i + 1
			<< std::setw(25) << nameArr[i]
			<< std::setw(11) << amountArr[i]
			<< std::setw(5) << priceArr[i] << "\n";
	}

	delete[]nameArr;
	delete[]amountArr;
	delete[]priceArr;
}
