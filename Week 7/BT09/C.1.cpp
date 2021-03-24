#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

char* reverse(const char a[]);
char* delete_char(const char a[],const char c);
char* pad_right(const char a[],const int n);
void pad_left(const char a[],const int n);
char* truncate(const char a[],const int n);
char* trim_left(const char a[]);
char* trim_right(const char a[]);

int main()
{
    const char a[] = "    Hello World   ";
    char* result = reverse(a);
    cout << result << endl;
    result = delete_char(a, 'l');
    cout << result << endl;
    result = pad_right(a, 10);
    cout << result << endl;
    pad_left(a, 10);
    result = truncate(a, 7);
    cout << result << endl;
    result = trim_left(a);
    cout << result << endl;
    result = trim_right(a);
    cout << trim_right(a) << endl;
}

char* reverse(const char a[])
{
    int len = strlen(a);
    char* str = new char[len];
    strcat(str, a);
    int i=0, j=len-1;
    while(i<len/2 && j>len/2)
    {
        char temp = str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    return str;
}

char* delete_char(const char a[],const char c)
{
    int len = strlen(a);
    char* str = new char[len];
    strcat(str, a);
    for(int i=0; i<len; i++)
        if(str[i]==c) str[i]=' ';
    return str;
}

char* pad_right(const char a[],const int n)
{
    int len = strlen(a);
    char* str = new char[len];
    strcat(str, a);
    for(int i=len; i<n; i++)
        str[i+1] = ' ';
    return str;
}

void pad_left(const char a[],const int n)
{
    int len = strlen(a);
    char* str = new char[len];
    strcat(str, a);
    cout << setw(n) << str << endl;
}

char* truncate(const char a[], const int n)
{
    int len = strlen(a);
    char* str = new char[len];
    strcat(str, a);
    while(len-- > n)
    {
        str[len] = ' ';
    }
    return str;
}

char* trim_left(const char a[])
{
    int len = strlen(a);
    char* str = new char[len];
    strcat(str, a);
    char* temp = str;
    char* cpy = str ;
    while (*cpy)
    {
        if (*cpy != ' ')
            *temp++ = *cpy;
        cpy++;
    }
    *temp = 0;
    return str;
}

char* trim_right(const char a[])
{
    int len = strlen(a);
    char* str = new char[len];
    strcat(str, a);
    char* temp = str;
    char* cpy = str;
    while (*cpy)
    {
        if (*cpy != ' ')
            *temp++ = *cpy;
        cpy++;
    }
    *temp = 0;
    return str;
}

