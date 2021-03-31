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

Point mid_point(const Point a, const Point b)
{
    Point mid;
    mid.x = (a.x+b.x)/2;
    mid.y = (a.y+b.y)/2;
    return mid;
}

int main()
{
    Point a, b;
    a.x = 1;
    a.y = 2;
    b.x = 3;
    b.y = 4;
    Point c = mid_point(a, b);
    c.print();

}
