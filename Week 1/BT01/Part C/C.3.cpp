#include <iostream>
using namespace std;

int main()
{
    cout << "12 midnight" << endl;
    for(int i=1; i<=23; i++)
    {
        if(i<=11) cout << i << "am" << endl;
        if(i==12) cout << i << " noon" << endl;
        if(i>12) cout << i-12 << "pm" << endl;
    }
    return 0;
}
