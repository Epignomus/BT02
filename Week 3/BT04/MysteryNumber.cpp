#include <iostream>
using namespace std;
int main()
{
    int n, sum1=0, sum2=0;
    cin >> n;
    int arr1[n], arr2[n+1];
    for(int i=0; i<n; i++)
    {
        cin >> arr1[i];
        sum1 += arr1[i];
    }
    for(int i=0; i<n+1; i++)
    {
        cin >> arr2[i];
        sum2 += arr2[i];
    }
    cout << sum2-sum1;
    return 0;
}
