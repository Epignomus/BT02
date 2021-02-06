#include <iostream>
using namespace std;
int main()
{
    int n, val, flag = 0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> val;
        arr[i]=val;
    }

    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    if (arr[i] == arr[j])
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }

    if(flag==1) cout << "Yes";
    else cout << "No";
}
