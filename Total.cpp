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

void AppendToArrays(std::ifstream& file, std::string path, std::string *&arr, int& size)
{
	file.open(path);

	if (!file.is_open())
	{
		std::cout << "\nError\n";
	}
	else
	{
		std::string data;
		int ind = 0;
		std::string* tempArr = new std::string[size];

		while (!file.eof())
		{
			if (ind == 0)
			{
				data = "";
				file >> data;
				arr[ind] = data;
			}
			else
			{
				for (int i = 0; i < size; i++)
				{
					tempArr[i] = arr[i];
				}

				delete[]arr;
				size++;
				arr = new std::string[size];

				for (int i = 0; i < size - 1; i++)
				{
					arr[i] = tempArr[i];
				}

				data = "";
				file >> data;
				arr[ind] = data;

				delete[]tempArr;
				tempArr = new std::string[size];

				for (int i = 0; i < size; i++)
				{
					tempArr[i] = arr[i];
				}
			}
			ind++;
		}
		delete[]tempArr;
	}
	file.close();
}
