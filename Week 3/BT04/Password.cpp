#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str[n], reverse;
    for(int i=0; i<n; i++)
        cin >> str[i];
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int flag = 1;
            int len = str[i].length(), m=0, n=len-1;
            if(len%2!=0 && len!=1)
            {
            while(m < len/2 && n > len/2)
            {
                if(i!=j)
                if(str[i][m++]!=str[j][n--]) flag = 0;
            }
            if(flag==1) cout << len << " " << str[i][len/2];
            }
        }
    }
    return 0;
}
