#include <iostream>
#include <iomanip>
using namespace std;

char* reverse(char a[]);
char* delete_char(char a[], char c);
char* pad_right(char a[], int n);
void pad_left(char a[], int n);
char* truncate(char a[], int n);
bool is_palindrome(char a[]);
char* trim_left(char a[]);
char* trim_right(char a[]);
int strlen(char a[]);


int main()
{
    char a[] = "Hello World";
    char b[] = "BBBBBBB";
    char c[] = "123";
    char d[] = "123456789";
    char e[] = "tacocat";
    char f[] = "       abc";
    char g[] = "abc       ";
    cout << reverse(a) << endl;
    cout << delete_char(b, 'B') << endl;
    cout << pad_right(c, 10) << endl;
    pad_left(c, 10);
    cout << truncate(d, 7) << endl;
    cout << is_palindrome(e) << endl;
    cout << trim_left(f) << endl;
    cout << trim_right(g) << endl;
}



int strlen(char a[])
{
    int i = 0;
    while(a[i] != 0) i++;
    return i;
}

char* reverse(char a[])
{
    int len = strlen(a);
    int i=0, j=len-1;
    while(i<len/2 && j>len/2)
    {
        char temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    return a;
}

char* delete_char(char a[], char c)
{
    int len = strlen(a);
    for(int i=0; i<len; i++)
        if(a[i]==c) a[i]=' ';
    return a;
}

char* pad_right(char a[], int n)
{
    int len = strlen(a);
    for(int i=len; i<n; i++)
        a[i+1] = ' ';
    return a;
}

void pad_left(char a[], int n)
{
    cout << setw(n) << a << endl;

}

char* truncate(char a[], int n)
{
    int len = strlen(a);
    while(len-- > n)
    {
        a[len] = ' ';
    }
    return a;
}

bool is_palindrome(char a[])
{
    int len = strlen(a);
    int i=0, j=len-1;
    while( i++ < len/2 && j-- > len/2)
    {
        if(a[i]!=a[j]) return false;
    }
    return true;
}

char* trim_left(char a[])
{
    char* temp = a;
    char* cpy = a;
    while (*cpy)
    {
        if (*cpy != ' ')
            *temp++ = *cpy;
        cpy++;
    }
    *temp = 0;
    return a;
}

char* trim_right(char a[])
{
    char* temp = a;
    char* cpy = a;
    while (*cpy)
    {
        if (*cpy != ' ')
            *temp++ = *cpy;
        cpy++;
    }
    *temp = 0;
    return a;
}
