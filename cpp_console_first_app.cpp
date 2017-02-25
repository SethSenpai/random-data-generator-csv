// cpp_console_first_app.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
	ofstream outfile;

	outfile.open("rndData.csv");

	int rndData[100];
	int numbersize;
	int seednumber;
	int dataAmount;
	int colAmount;

	cout << "max value n - 1: ";
	cin >> numbersize;

	cout << "amount of colums: ";
	cin >> colAmount;

	cout << "amount of rows: ";
	cin >> dataAmount;

	cout << "seed number: ";
	cin >> seednumber;

	srand(seednumber);

	for (int i = 0; i < dataAmount; i++) 
	{
		for (int j = 0; j < colAmount; j++)
		{
			if (j == colAmount - 1)
			{
				int r = rand() % numbersize;
				outfile << r << endl;
			}
			else
			{
				int r = rand() % numbersize;
				outfile << r << ",";
			}			
		}
	}
	outfile.close();

    return 0;
}


