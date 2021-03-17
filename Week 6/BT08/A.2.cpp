#include <iostream>
using namespace std;

int main( )
{
    // Câu a
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }

   cout << endl;

    // Câu b
   int b[4]={0, 1, 2, 3};
   int *ci = b;
   for(int i=0; i<4; i++)
      cout << (ci+i) << " : " << (*ci+i) << endl;

   cout << endl;

    // Câu c
   double c[4]={0, 1, 2, 3};
   double *cd = c;
   for(int i=0; i<4; i++)
      cout << (cd+i) << " : " << (*cd+i) << endl;

    // Câu d
   for(int i=0; i<4; i+=2)
      cout << (cd+i) << " : " << (*cd+i) << endl;
}
