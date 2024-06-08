#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
#include <string>

void FileOutput();
void OutputToCertainFile(int& i, std::ofstream& file, std::string path);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	FileOutput();

	return 0;
}

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

void OutputToCertainFile(int& i, std::ofstream& file, std::string path)
{
	std::string data;
	char chooseAppend;

	if (i == 0)
	{
		file.open(path);

		if (!file.is_open())
		{
			std::cerr << "Error";
		}
		else
		{
			std::cout << "\nТекст:\n";
			std::cin.ignore(3200, '\n');
			std::getline(std::cin, data);
			file << data;
		}

		file.close();
		i++;
	}
	else
	{
		do
		{
			std::cout << "\n1) Дополнить существуйющий текст\n2) Стереть и заполнить по новой\n0) Назад\n";
			std::cin.ignore(3200, '\n');
			std::cin >> chooseAppend;
		} while (chooseAppend < 48 || chooseAppend > 50);

		if (chooseAppend == '1')
		{
			file.open(path, std::ofstream::app);

			if (!file.is_open())
			{
				std::cerr << "Error";
			}
			else
			{
				std::cout << "\nТекст:\n";
				std::cin.ignore(3200, '\n');
				std::getline(std::cin, data);
				file << data;
			}

			file.close();
		}
		else
		{
			file.open(path);

			if (!file.is_open())
			{
				std::cerr << "Error";
			}
			else
			{
				std::cout << "\nТекст:\n";
				std::cin.ignore(3200, '\n');
				std::getline(std::cin, data);
				file << data;
			}

			file.close();
		}
		i++;
	}
}
