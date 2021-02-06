#include <iostream>
using namespace std;
int main()
{
    int n, A, B;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int count = 0;
        cin >> A >> B;
        for(int j = A; j<=B; j++)
        {
            int temp = j;
            int sum = 0;
            while(temp>0) {
                int r = temp%10;
                sum = 10*sum+r;
                temp = temp/10;
            }
            if(j==sum) count++;
        }
        cout << count << endl;
    }
    return 0;
}


