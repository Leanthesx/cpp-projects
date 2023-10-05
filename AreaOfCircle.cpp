#include "iostream"
#include "cmath"

using namespace std;

inline double areaofcircle(int r)
{
    return 3.14f * pow(r,2);
}

int main(int argc, char* argv[])
{
    int r;
    
    cout << "Enter the radius of circle: ";
    cin >> r;
    
    cout << "Area of circle is: " << areaofcircle(r);
    return 0;
}
