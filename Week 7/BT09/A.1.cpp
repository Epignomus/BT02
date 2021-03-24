#include <iostream>
#include <cstring>
using namespace std;

char* concat(const char* a, const char* b)
{
    int len1 = strlen(a);
    int len2 = strlen(b);
    char* str = new char[len1+len2];
    strcat(str, a);
    strcat(str, b);
    return str;
}

int main()
{
    const char* str1 = "Hello";
    const char* str2 = "World";
    char* str = concat(str1, str2);
    cout << str;
    delete[] str;
    return 0;
}
