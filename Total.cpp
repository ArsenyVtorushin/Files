#include "Total.hpp"

void Total(std::string namePath, std::string amountPath, std::string pricePath)
{
	std::ifstream nameFileFrom;
	std::ifstream amountFileFrom;
	std::ifstream priceFileFrom;

	int sizeName = 1, sizeAmount = 1, sizePrice = 1;

	std::string* names = new std::string[sizeName]{};
	std::string* amounts = new std::string[sizeAmount]{};
	std::string* prices = new std::string[sizePrice]{};

	AppendToArrays(nameFileFrom, namePath, names, sizeName);
	AppendToArrays(amountFileFrom, amountPath, amounts, sizeAmount);
	AppendToArrays(priceFileFrom, pricePath, prices, sizePrice);

	PrintToConsole(names, amounts, prices);

	delete[]names;
	delete[]amounts;
	delete[]prices;
}

void AppendToArrays(std::ifstream& file, std::string path, std::string arr[], int& size)
{
	file.open(path);

	if (!file.is_open())
	{
		std::cout << "\nError\n";
	}
	else
	{
		std::string data;
		int i = 0;

		while (!file.eof())
		{
			data = "";
			arr[i] = data;
			size++;
			i++;
		}
	}

	file.close();
}
