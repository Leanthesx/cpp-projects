#include <iostream>

using namespace std;

int main()
{
    float number1, number2;
    int selection;

    cout << "****/CALCULATOR\****" << endl;

    cout << "Please enter 1st number: ";
    cin >> number1;

    cout << "Please enter 2nd number: ";
    cin >> number2;

    cout << "1st number: " << number1 << endl;
    cout << "2nd number: " << number2 << endl;

    cout << "*Please select any operation*" << endl;
    cout << "1 -> Addition, 2-> Subtraction, 3-> Multiplication, 4-> Divison, Your choice is: ";
    cin >> selection;

    switch (selection) {
    case 1:
        cout << number1 << " + " << number2 << " = " << number1 + number2;
        break;

    case 2:
        cout << number1 << " - " << number2 << " = " << number1 - number2;
        break;

    case 3:
        cout << number1 << " * " << number2 << " = " << number1 * number2;
        break;

    case 4:
        cout << number1 << " / " << number2 << " = " << number1 / number2;
        break;

    default:
        cout << "You made the wrong choice, exiting...";
        break;
        
    }


}
