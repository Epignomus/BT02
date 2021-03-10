#include <iostream>
using namespace std;

void my_swap(int x, int y) {

int t = x; x = y; y = t;
cout << &x << " " << &y << endl;
}

void my_swap2(int& x, int& y) {

int t = x; x = y; y = t;
cout << &x << " " << &y << endl;

}

int main() {

int a = 2;

int b = 3;
cout << &a << " " << &b << endl; // Địa chỉ của đối số
my_swap(a, b);  // Địa chỉ của tham trị
my_swap2(a, b); // Địa chỉ của tham biến

}
