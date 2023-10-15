#include "iostream"

using namespace std;

template <typename T>
T addition(T number1, T number2)
{
    return number1 + number2;
}
int main(int argc, char* argv[])
{
    cout << addition<int>(5, 7) << endl;
    cout << addition<float>(5.5f, 5.7f) << endl;
    cout << addition<double>(5.5874539, 8.7951473) << endl;
    return 0;

    
}
