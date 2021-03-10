#include <iostream>
using namespace std;

void f(int arr[])
{
    cout << &arr << endl;
}
void f2(string str)
{
    cout << &str << endl;
}

int main()
{
    int arr[100];
    string str;
    cout << &arr << endl << &str << endl;
    f(arr);
    f2(str);
}
// Mảng và string được truyền theo cơ chế pass-by-reference.
