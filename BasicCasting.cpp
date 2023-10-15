#include "iostream"
#include "typeinfo"

using namespace std;

//Base class must be polymorphic to use dynamic_cast operator
class Base { virtual void virtualfunc() {} };
class Derived : public Base {};

int main() {

    //Upcasting
    Base* b = new Derived;
    //Downcasting
    Derived* d = dynamic_cast<Derived*>(b);

    if (d != NULL)
        cout << "Successfully casted,Type: " << typeid(*d).name() << endl;
    else
        cout << "Failed";

    delete b;
    
    return 0;
}

