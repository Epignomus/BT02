#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

void f(Point a)
{
    cout << &a << endl;
}

void g(Point &a)
{
    cout << &a << endl;
}

int main()
{
    Point a;
    a.x = 1;
    a.y = 2;
    cout << "Address of initialized 2D point: " << &a << endl;
    cout << "After passing by value into a function:  "; f(a);
    cout << "After passing by reference into a function:  "; g(a);

}
