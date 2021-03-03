#include <iostream>
using namespace std;

void permutation(string a, int l, int r)
{
    if (l == r)
        cout<<a<<endl;
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permutation(a, l+1, r);
            swap(a[l], a[i]);
        }
    }
}

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    cout << endl;
    permutation(str, 0, n-1);
    return 0;
}
