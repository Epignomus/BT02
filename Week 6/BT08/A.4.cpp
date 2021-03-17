#include <iostream>
using namespace std;

int main()  {
   char *s;
   char foo[] = "Hello World";
   s = foo;
   printf("s is %s\n",s);
   printf("s[0] is %s\n", s+1);
   return(0);
}

