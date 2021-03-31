#include <iostream>
#include <cstring>
using namespace std;

struct String
{
    int n;
    char* str = new char[n];

    String(const char* a)
    {
        n = strlen(a);
        strcpy(str, a);
    }

    void free()
    {
        delete[] str;
        str = NULL;
    }

    void print()
    {
        for(int i=0; i<n; i++)
            cout << str[i];
        cout << endl;
    }

    void append(const char* a)
    {
        int n = strlen(a);
        int m = strlen(str);
        char* temp = new char[m+n];
        for(int i=0; i<m; i++)
            temp[i] = str[i];
        strcat(temp, a);
        for(int i=0; i<n+m; i++)
            cout << temp[i];
    }
};

int main()
{
    String s("Hello");
    s.print();
    s.append(" there");
}
