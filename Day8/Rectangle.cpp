#include<iostream>
#include <string>
using namespace std;

class Rectangle
{
    double _length;
    double _breadth;
    public :
    Rectangle (double l = 2.0, double b = 2.0){_length = l;_breadth = b;}
    double Area(){return _length * _breadth;}
    int compare(Rectangle rectangle)
    {
        return this->Area() > rectangle.Area(); 
    }
};

int main ()
{
    Rectangle H1(3.0,3.0);
    Rectangle H2(4.0,4.0);

    if (H1.compare(H2))
    {
        cout<<"H2 is Samller"<<endl;
    }
    else
    {
        cout<<"H2 is Bigger"<<endl;
    }
    return 0;
}