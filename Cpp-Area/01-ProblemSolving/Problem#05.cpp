#include <iostream>
using namespace std;

struct strInfo
{
	short Age;
	bool HasDrivingLicense, HasRecommendation;
};

strInfo ReadInfo()
{
	strInfo Info;

	cout << "How old are you? ";
	cin >> Info.Age;

	cout << "Do you have driver license? ";
	cin >> Info.HasDrivingLicense;

	cout << "Do you have recommendation? ";
	cin >> Info.HasRecommendation;

	return Info;
}

bool IsAccepted(strInfo Info)
{
	if (Info.HasRecommendation)
	{
		return true;
	}
	else
	{
		return (Info.Age > 21 && Info.HasDrivingLicense);
	}
}

void PrintResult(strInfo Info)
{
	if (IsAccepted(Info))
	{
		cout << "\n Hired! \n";
	}
	else
	{
		cout << "\n Rejected! \n";
	}
}

int main()
{
	PrintResult(ReadInfo());

	return 0;
}