#include <iostream>
using namespace std;


int main()
{
    int* p = new int;
    {
        int n = 10;
        *p = n;
    }
    delete p;
    // Chương trình không lỗi
}
