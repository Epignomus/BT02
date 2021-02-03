#include <iostream>
using namespace std;
int main()
{
    int n, flag = 0;
    cin >> n;
    if(n==0 || n==1) cout << "no";
    else
    {
        for(int i=2; i<n/2; i++) {
            if(n%i==0) flag = 1;
            break;
        }
    }
    if(flag==0) cout << "yes";
    else cout << "no";
    return 0;
}
