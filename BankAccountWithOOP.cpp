#include <iostream>

using namespace std;

class CPPBank {
private:
	string OwnerName;
	int CurrentMoney;

public:
	CPPBank(string Isim, int MevcutPara) {
		OwnerName = Isim;
		CurrentMoney = MevcutPara;
	}

	void GetCurrentMoney() {
		cout << "Welcome " << OwnerName << ", Your current money is: " << CurrentMoney << endl;
	}

	void IncreaseMoney(int Value) {
		CurrentMoney += Value;
	}

	void ReduceMoney(int Value) {
		CurrentMoney -= Value;
	}
};
int main()
{
	CPPBank customer1("Emre", 5000);
	customer1.GetCurrentMoney();

	customer1.IncreaseMoney(500);
	customer1.GetCurrentMoney();

	customer1.ReduceMoney(1500);
	customer1.GetCurrentMoney();
}
