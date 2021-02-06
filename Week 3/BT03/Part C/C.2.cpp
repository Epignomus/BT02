#include <iostream>
#include <string>
using namespace std;
int main()
{
   string str;
   cin >> str;
   int len = str.length(), flag = 1;
   int i = 0, j = len - 1;
   while(i<len/2 && j>len/2)
   {
       if(str[i++]!=str[j--]) flag = 0;
       break;
   }
   if(flag==0) cout << "No";
   else cout << "Yes";
   return 0;
}
