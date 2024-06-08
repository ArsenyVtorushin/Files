#include "WriteToFile.hpp"

void WriteToFile(int& i, std::ofstream& file, std::string path, std::string data)
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
