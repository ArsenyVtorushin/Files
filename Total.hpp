#ifndef TOTAL_HPP
#define TOTAL_HPP
#include "PrintToConsole.hpp";

void Total(std::string namePath, std::string amountPath, std::string pricePath);
void AppendToTotalFile(std::ifstream& file, std::string path, std::ofstream& totalFile, std::string totalPath, std::string arr[], int& size);
#endif // !TOTAL_HPP


