#include <iostream>
using namespace std;

void f(int A[]) {
    cout << sizeof(A)/sizeof(A[0]);
}

int main()
{
    int A[10];
    int n = sizeof(A)/sizeof(A[0]);
    cout << n << endl;
    f(A);
}
