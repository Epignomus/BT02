#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=n-1; i>0; i--) cout << " ";
    for(int i = 0; i<n; i++) {
        for(int j = 2*i+1; j>0; j--) {
            cout << "*";
        }
        cout << endl;
        for(int k=n-i-2; k>0; k--) cout << " ";
    }
    return 0;
}
