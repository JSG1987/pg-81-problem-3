// the goal of this program is to calculate sales tax

#include<iostream>

using namespace std;

int main()
{
	float state = .04;
	float county = .02;
	int purchase = 92;

	float stateTotal;
	float countyTotal;
	stateTotal = purchase * state;
	countyTotal = purchase * county;
	cout << "The state tax is $" << stateTotal << endl;
	cout << "The county tax is $" << countyTotal << endl;


	system("PAUSE");
	return 0;
}