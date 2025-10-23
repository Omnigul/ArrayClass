#include "Array.h"
#include <iostream>
#include <iomanip>
using namespace std;

const double Array::errNum = 13.37;
int MAX_SIZE = 10;

Array::Array(int size = MAX_SIZE)
{
	int counter = 0;
	while (counter <= size)
	{
		numArray[counter] = 0;
		counter++;
	}
}

void Array::end()
{
	delete[] numArray;
	cout << "the deconstructor has run." << endl;
}

void Array::insertNum(double num, int place)
{
	if (0 <= place <= MAX_SIZE)
	{
		numArray[place] = num;
	}
	else
	{
		cout << "Error in insertNum: out of index." << endl;
	}
}

double Array::getNum(int place)
{
	if (0 <= place <= MAX_SIZE)
	{
		return numArray[place];
	}
	else
	{
		cout << "Error in getNum: out of index, seting to default." << endl;
		return errNum;
	}
}

double Array::getMin()
{
	int counter = 0;
	double temp = numArray[counter];
	while (counter <= MAX_SIZE)
	{
		counter++;
		if (temp > numArray[counter])
		{
			double temp = numArray[counter];
		}
			
	}
	return temp;
}

double Array::getMax()
{
	int counter = 0;
	double temp = numArray[counter];
	while (counter <= MAX_SIZE)
	{
		counter++;
		if (temp < numArray[counter])
		{
			double temp = numArray[counter];
		}

	}
	return temp;
}

double Array::getAverage()
{
	int counter = 0;
	double total = 0;
	while (counter <= MAX_SIZE)
	{
		total = +numArray[counter];
		counter++;
	}
	double ave = total / MAX_SIZE;
	return ave;
}

void Array::display()
{
	int counter = 0;
	cout << "[";
	while (counter <= MAX_SIZE)
	{
		cout << fixed << setprecision(1) << numArray[counter] << " ";
		counter++;
	}
	cout << "]";
}