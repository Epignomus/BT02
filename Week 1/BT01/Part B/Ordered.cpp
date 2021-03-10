#include <iostream>
using namespace std;

int main()
{
    bool b=false;
    int x, y, z;
    cin >> x >> y >> z;
    if((x<y && y<z) || (x>y && y>z)) b = true;
    cout << b;
    return 0;
}
