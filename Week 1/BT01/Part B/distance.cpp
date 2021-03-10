#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    double distance = sqrt(x*x+y*y);
    cout << distance;
    return 0;
}
