#include <iostream>
using namespace std;
int main()
{
   int n, temp;
   cin >> n;
   cout << n << " ";
   temp = n;
   while(cin>>n && n>0)
   {
       if(n==temp) {
       }
       else cout << n << " ";
       temp = n;
   }
   cout << n;
}
