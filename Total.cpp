#include "Total.hpp"

void Total(std::string namePath, std::string amountPath, std::string pricePath)
{
	std::ifstream nameFileFrom;
	std::ifstream amountFileFrom;
	std::ifstream priceFileFrom;

	int sizeName = 1, sizeAmount = 1, sizePrice = 1;

	std::string* names = new std::string[sizeName];
	std::string* amounts = new std::string[sizeAmount];
	std::string* prices = new std::string[sizePrice];

	std::ofstream totalFile;
	std::string totalPath = "total.txt";

	AppendToTotalFile(nameFileFrom, namePath, totalFile, totalPath, names, sizeName);
	AppendToTotalFile(amountFileFrom, amountPath, totalFile, totalPath, amounts, sizeAmount);
	AppendToTotalFile(priceFileFrom, pricePath, totalFile, totalPath, prices, sizePrice);

	PrintToConsole(names, amounts, prices);

}

void AppendToTotalFile(std::ifstream& file, std::string path, std::ofstream& totalFile, std::string totalPath, std::string arr[], int& size)
{
	file.open(path);

	if (!file.is_open())
	{
		std::cout << "\nError\n";
	}
	else
	{
		totalFile.open(totalPath, std::ofstream::app);

		if (!totalFile.is_open())
		{
			std::cerr << "\nError\n";
		}
		else
		{
			std::string data;
			int i = 0;

			while (!file.eof())
			{
				data = "";
				file >> data;

				totalFile << data << " ";
				arr[i] = data;

				i++;
			}
			totalFile << "\n";
		}

		totalFile.close();
	}

	file.close();
}
