#include "iostream"

using namespace std;

class AreaoftheShapeCalculator
{
public:
    virtual void AreaOfTheShape() = 0;
};

class Circle : public AreaoftheShapeCalculator
{
    float r, areaofthecircle;
public:
    Circle(float radius)
    {
        r = radius;
        areaofthecircle = 3.14f * r * r; 
    }
    void AreaOfTheShape()
    {
        cout << "Area of the circle is: " << areaofthecircle << endl;
    }
};

class Rectangle : public AreaoftheShapeCalculator
{
    int length, width, areaoftherectangle;
public:
    Rectangle(int len, int wid)
    {
        length = len;
        width = wid;
        areaoftherectangle = length * width; 
    }
    void AreaOfTheShape()
    {
        cout << "Area of the rectangle is: " << areaoftherectangle << endl;
    }
};



int main(int argc, char* argv[])
{
    AreaoftheShapeCalculator* shapes[2];
    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(7,10);

    for(int i = 0; i < 2 ; i++)
    {
        shapes[i]->AreaOfTheShape();
    }
    
    return 0;
}
