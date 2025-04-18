#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
	int Num;

	cout << "Enter a number: ";
	cin >> Num;

	return Num;
}

float CalculateHlafNumber(int Num)
{
	return (float)Num / 2;
}

void PrintResults(int Num)
{
	string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHlafNumber(Num));
	cout << endl << Result << endl;
}

int main()
{
	PrintResults(ReadNumber());
	return 0;
}