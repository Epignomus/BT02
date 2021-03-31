#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;

    void print()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

struct array
{
    int a[1];
};

struct ofStruct
{
    Point a;
};

int main()
{
    array arr1;
    arr1.a[0] = 3;
    array arr2 = arr1;
    cout << arr2.a[0] << endl;

    ofStruct first;
    first.a.x = 1;
    first.a.y = 2;
    ofStruct second = first;
    second.a.print();

}
