#include <iostream>
using namespace std;

int main( )
{
    // C�u a
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }

   cout << endl;

    // C�u b
   int b[4]={0, 1, 2, 3};
   int *ci = b;
   for(int i=0; i<4; i++)
      cout << (ci+i) << " : " << (*ci+i) << endl;

   cout << endl;

    // C�u c
   double c[4]={0, 1, 2, 3};
   double *cd = c;
   for(int i=0; i<4; i++)
      cout << (cd+i) << " : " << (*cd+i) << endl;

    // C�u d
   for(int i=0; i<4; i+=2)
      cout << (cd+i) << " : " << (*cd+i) << endl;
}
