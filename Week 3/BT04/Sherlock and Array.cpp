#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int len, sum = 0, left = 0;
        bool flag = false;
        cin >> len;
        int arr[len];
        if(len==1) {
            cin >> arr[0];
            cout << "YES" << endl;
        }
        else {
        for(int j=0; j<len; j++)
        {
             cin >> arr[j];
             sum += arr[j];
        }
        for(int j=0; j<len; j++)
        {
            if(left==(sum-left-arr[j])) flag = true;
            left+=arr[j];
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
        }
    }
}
