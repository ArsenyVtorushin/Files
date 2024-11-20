#include "PrintToConsole.hpp"

void PrintToConsole(std::string nameArr[], std::string amountArr[], std::string priceArr[])
{
	std::cout << "\n\n" << std::left
		<< std::setw(3) << "ID"
		<< std::setw(15) << "Название"
		<< std::setw(11) << "Количество"
		<< std::setw(5) << "Цена\n\n";

	for (int i = 0; i < 3; i++)
	{
		std::cout << std::left
			<< std::setw(3) << i + 1
			<< std::setw(15) << nameArr[i]
			<< std::setw(11) << amountArr[i]
			<< std::setw(5) << priceArr[i] << "\n";
	}
}
