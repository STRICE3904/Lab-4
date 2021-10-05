#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <cctype>


using namespace std;
void tempread();

string fileName= "C:/Users/quinn/source/repos/Lab-4";
ifstream inFile;
char intemp;



int main()
{
	inFile.open("inTempurature.dat");
	if (!inFile)
	{
		cout << "Input file failed to open.";
		return 1;

	}
	inFile.get(intemp);
	tempread();
	inFile.close();

	return 0;
}

void tempread()
{
	int mintemp = '-35';
	int maxtemp = '120';
	cout << "Tempurature for 24 hours:\n";
	cout << "   -30        0        30        60        90       120";
	string star;
	star = " * ";
	string space;
	space = " ";
	for (int i = 1; i <= (abs(intemp) / 3.0); ++i) //abs() is used to calculate values for negative inputs.
	{
		star.append("*"); //Appends a star to a string called star every time the loop iterates.
	}

	while (intemp)
		if (intemp == -30) 
		{
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
		getchar(); 
	
	cout << "_______________\n";
	cout << "* = 3 degrees";
	cout << "\n_______________";
}