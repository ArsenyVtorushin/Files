#include "OutputToCertainFile.hpp"

void OutputToCertainFile(int& i, std::ofstream& file, std::string path)
{
	std::string data;
	char chooseAppend;

	if (i == 0)
	{
		WriteToFile(i, file, path, data);
	}
	else
	{
		do
		{
			std::cout << "\n1) ��������� ������������� �����\n2) ������� � ��������� �� �����\n0) �����\n";
			std::cin.ignore(3200, '\n');
			std::cin >> chooseAppend;
		} while (chooseAppend < 48 || chooseAppend > 50);

		if (chooseAppend == '1')
		{
			AppendToFile(i, file, path, data);
		}
		else
		{
			WriteToFile(i, file, path, data);
		}
	}
}
