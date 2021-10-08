#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <cctype>


using namespace std;
void tempread();

string inputFileName= "C:/Users/quinn/source/repos/Lab-4/Lab-4/";
ifstream infile;
char intemp;



int main()
{
	infile.open(inputFileName);
	if (!infile)
	{
		cout << "Input file failed to open.";
		return 1;

	}
	tempread();
	infile.close();

	return 0;
}

void tempread()
{
	infile.get(intemp);
	int mintemp = '-35';
	int maxtemp = '120';
	cout << "Tempurature for 24 hours:\n";
	cout << "   -30        0        30        60        90       120";
	string star;
	star = " * ";
	string space;
	space = " ";

	while (intemp != '\0')
	{
		if (intemp <= -35)
		{
			for (int i = 0; i != intemp; ++i) {
				for (int j = 0; j != intemp; ++j) {
					cout << star;
				}
				cout << "|";
				cout << endl;
			}
		}
		cout << endl;
		infile.get(intemp);
	}
	cout << "_______________\n";
	cout << "* = 3 degrees";
	cout << "\n_______________";
}