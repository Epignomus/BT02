#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(int argc, const char * argv[])
{
    int count = 0;
    string arg1(argv[1]), arg2(argv[2]);
    int len1=arg1.length();
    int len2=arg2.length();
    for(int i=0; i<len2-len1+1; i++)
    {
        string temp = arg2.substr(i, len1);
        if(arg1==temp) count++;
    }
    cout << count;
}
