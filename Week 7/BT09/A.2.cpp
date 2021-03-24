#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    int *p2 = p;
    *p = 10;
    delete p; // freeing up memory that will be used later
    *p2 = 100;
    cout << *p2;
    delete p2;
    return 0;
}
