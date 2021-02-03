#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = n; i>=0; i--) {
        for(int j = 2*i-1; j>0; j--) {
            cout << "*";
        }
        cout << endl;
        for(int k=n-i; k>=0; k--) cout << " ";
    }
    return 0;
}
