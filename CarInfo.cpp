#include <iostream>

using namespace std;

class Car {
public:
	string brand;
	string model;
	int year;

	void ShowInfo() {
		cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
	}
};
int main()
{
	Car car1, car2;
	
	car1.brand = "BMW";
	car1.model = "520i";
	car1.year = 2023;

	car2.brand = "AUDI";
	car2.model = "S8";
	car2.year = 2022;

	car1.ShowInfo();
	car2.ShowInfo();

	
}

