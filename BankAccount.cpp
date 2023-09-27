#include <iostream>

using namespace std;

void IncreaseMoney(int* Money, int Value) {
	*Money += Value;
}

void ReduceMoney(int* Money, int Value) {
	*Money -= Value;
}

int main()
{
	int Money = 5000;
	int select, value;

	cout << "1 -> IncreaseMoney, 2-> ReduceMoney, Your choose is:  ";
	cin >> select;

	switch (select) {
	case 1:
		cout << "How much money do you want to add to your bank account: ";
		cin >> value;

		IncreaseMoney(&Money, value);
		cout << "Your new money in your bank account is " << Money;
		break;

	case 2:
		cout << "How much money do you want to reduce from your bank account: ";
		cin >> value;

		if (value > Money) {
			cout << "You can't enter a value higher than your current money, exiting...";
			break;
		}
		else {
			ReduceMoney(&Money, value);
			cout << "Your new money in your bank account is " << Money;
		}
		break;

	default:
		cout << "You made the wrong choice, exiting...";
		break;
	}

	

}



