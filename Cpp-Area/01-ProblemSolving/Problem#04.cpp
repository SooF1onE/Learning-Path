#include <iostream>
using namespace std;

struct stInfo
{
	short Age;
	bool HasDriverLicense;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "How Old Are You? ";
	cin >> Info.Age;

	cout << "Do You Have Driver License? ";
	cin >> Info.HasDriverLicense;

	return Info;
}

bool IsAccepted(stInfo Info)
{
	return (Info.Age > 21 && Info.HasDriverLicense);
}

void Printresult(stInfo Info)
{
	if (IsAccepted(Info))
	{
		cout << "\n Hired!" << endl;
	}
	else
	{
		cout << "\n Rejected!" << endl;
	}
}

int main()
{
	Printresult(ReadInfo());

	return 0;
}