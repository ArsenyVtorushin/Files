#include "FileOutput.hpp"

void FileOutput()
{
	std::ofstream nameFile;
	std::string namePath = "nameFile.txt";
	std::ofstream amountFile;
	std::string amountPath = "amountFile.txt";
	std::ofstream priceFile;
	std::string pricePath = "priceFile.txt";

	int i1 = 0, i2 = 0, i3 = 0;

	while (true)
	{
		char choose;
		do
		{
			std::cout << "\nВыберите, куда записывать данные:\n1) Название товара\n2) Количество\n3) Цена\n0) Выход\n";
			std::cin >> choose;
		} while (choose < 48 || choose > 51);

		if (choose == '1')
		{
			OutputToCertainFile(i1, nameFile, namePath);
		}
		else if (choose == '2')
		{
			OutputToCertainFile(i2, amountFile, amountPath);
		}
		else if (choose == '3')
		{
			OutputToCertainFile(i3, priceFile, pricePath);
		}
		else
		{
			break;
		}
	}
}
