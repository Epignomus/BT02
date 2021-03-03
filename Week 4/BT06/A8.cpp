#include <iostream>
using namespace std;

void allSubsets(int num, int size)
{
    int arr[size];
    if(num > size)
    {
        cout << "{";
        for(int i=0; i<size; i++)
            cout << arr[i] << " ";
        cout << "}";
    }
    else
    {

    // problem unresolved
        allSubsets(num+1, size);


        allSubsets(num+1, size);
    }

}

int main()
{
    int n;
    cin >> n;
    allSubsets(1, n);
}
