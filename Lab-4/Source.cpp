#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;
void tempread();

string inputFileName;
ifstream infile; //File identifier


int main()
{
	infile.open("tempurature.dat");
	infile.close();

	return 0;
}

void tempread()
{
	int temp = '2';
	int mintemp = '-35';
	int maxtemp = '120';
	int num;
	while (num != '\0')
		if (temp < mintemp)
		{
			mintemp = temp;
		}
		else if (temp > maxtemp)
		{
			maxtemp = temp;
		}



}