#include <iostream>
using namespace std;

struct strInfo
{
	string FirstName, LastName;
};

strInfo ReadInfo()
{
	strInfo Info;

	cout << "Enter your first name: ";
	cin >> Info.FirstName;

	cout << "Enter your last name: ";
	cin >> Info.LastName;

	return Info;
}

string GetFullName(strInfo Info, bool Reversed)
{
	string FullName = "";

	if (Reversed == true)
		FullName = Info.LastName + " " + Info.FirstName;
	else
		FullName = Info.FirstName + " " + Info.LastName;

	return FullName;
}

void PrintFullName(string FullName)
{
	cout << "\n Your name is: " << FullName << endl;
}

int main()
{
	PrintFullName(GetFullName(ReadInfo(), false));

	return 0;
}