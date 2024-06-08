#include "AppendToFile.hpp"

void AppendToFile(int& i, std::ofstream& file, std::string path, std::string data)
{
	char chooseNewLine;

	do
	{
		std::cout << "\n1) Начать с новой строки\n2) Продолжить в текущей\n0) Назад\n";
		std::cin.ignore(3200, '\n');
		std::cin >> chooseNewLine;
	} while (chooseNewLine < 48 || chooseNewLine > 50);

	if (chooseNewLine == '1')
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
			file << "\n" << data;
		}

		file.close();
		i++;
	}
	else if (chooseNewLine == '2')
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
		i++;
	}
}
