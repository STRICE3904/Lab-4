#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;
void tempread();

string inputFileName = "C:/Users/quinn/source/repos/Lab - 4";
ifstream infile; //File identifier


int main()
{
	infile.open("tempurature.dat");
	void tempread();
	infile.close();

	return 0;
}

void tempread()
{
	int temp;
	infile.get(temp);
	int mintemp = '-35';
	int maxtemp = '120';
	while (temp != '\0')

		if (temp < mintemp)
		{
			mintemp = temp;
		}
		else if (temp > maxtemp)
		{
			maxtemp = temp;
		}
		cout << mintemp << "|";
		
		



}