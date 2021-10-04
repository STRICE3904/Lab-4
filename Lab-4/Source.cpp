#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <cctype>


using namespace std;
void tempread(ifstream& inFile, string inputFileName);
string inputFileName = "C:/Users/quinn/source/repos/Lab - 4";
ifstream inFile;


int main()
{
	
	tempread(inFile, inputFileName);
	inFile.close();

	return 0;
}

void tempread(ifstream& inFile, string inputFileName)
{
	inFile.open("tempurature.dat");
	char inChar;
	inFile.get(inChar);
	float intemp = float(inChar);
	int mintemp = '-35';
	int maxtemp = '120';
	cout << "Tempurature for 24 hours:\n";
	cout << "   -30        0        30        60        90       120";
	string star; 
	star = ""; 
	while (intemp != '\0')
	{
		star.append("*");

		if (intemp == -30) {
			cout << setw(12) << star + "|";
		}
		else if (intemp > -30 && intemp <= -10)
		{
			cout << setw(12) << star + "|";
		}
		else if (intemp > -10 && intemp < 0)
		{
			cout << setw(13) << star + "|";
		}
		else if (intemp >= 0 && intemp < 10)
		{
			cout << setw(14) << "|" << star;
		}
		else if (intemp >= 10 && intemp < 100)
		{
			cout << setw(13) << "|" << star;
		}
		else if (intemp >= 100 && intemp <= 120)
		{
			cout << setw(12) << "|" << star;
		}

		cout << endl;
		inFile.get(inChar);
	}
cout << "###############\n";
cout << "* = 3 degrees";
cout << "\n###############";
}