#include <iostream>
using namespace std;

int* weird_sum(int a, int b) {

int c;

c = a + b;

return &c;

}

int main()
{
    int a = 1, b = 2;
    cout << weird_sum(a, b);
}
