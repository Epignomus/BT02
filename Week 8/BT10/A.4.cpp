#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;

    void f()
    {
        cout << &x << endl;
    }

    void g()
    {
        cout << &y << endl;
    }
};

int main()
{
    Point a;
    a.x = 1;
    a.y = 2;
    cout << "Address of member x: "; a.f();
    cout << "Address of member y: "; a.g();
    cout << "Address of struct: " << &a;
    //Adress of the first member in the struct is identical to struct itself.
}
