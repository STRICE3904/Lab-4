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
	char intemp;
	inFile.get(intemp);
	int mintemp = '-35';
	int maxtemp = '120';
	cout << "Tempurature for 24 hours:\n";
	cout << "   -30        0        30        60        90       120";
	string star;
	star = "";
	while (intemp != 'n')
	{
		star.append("*");

		if (intemp <= -35) {
			intemp == mintemp;
			cout << mintemp << setw(12) << star + "|";
		}
		else if (intemp > -30 && intemp <= -10)
		{
			cout << intemp << setw(12) << star + "|";
		}
		else if (intemp > -10 && intemp < 0)
		{
			cout << intemp << setw(13) << star + "|";
		}
		else if (intemp >= 0 && intemp < 10)
		{
			cout << intemp << setw(14) << "|" << star;
		}
		else if (intemp >= 10 && intemp < 100)
		{
			cout << intemp << setw(13) << "|" << star;
		}
		else if (intemp >= 100 && intemp <= 120)
		{
			cout << intemp << setw(12) << "|" << star;
		}
		else if (intemp >= 120)
		{
			intemp == maxtemp;
			cout << maxtemp << setw(12) << "|" << star;
		}

		cout << endl;
		inFile.get(intemp);
	}
	cout << "###############\n";
	cout << "* = 3 degrees";
	cout << "\n###############";
}