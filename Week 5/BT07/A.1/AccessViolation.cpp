#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int *pX;
    printf("%d\n", pX);
    printf("%d\n", *pX);
    *pX = 0;
    return 0;
}
