#include <iostream>
using namespace std;

int search(int key, int arr[], int N)
{
    int low = 0, high = N-1;
    while(high >= low)
    {
        int mid = low + (high-low)/2;
        if(*(arr+mid) < key) low = mid+1;
        else  if(*(arr+mid) > key) high = mid-1;
        else return mid;
    }
    return -1;
}

int main()
{
    int arr[100];
    int N, key, index = -1;
    cin >> key >> N;
    for(int i=0; i<N; i++) *(arr+i) = (i+1) * 10;

    cout << "{";
    for(int i=0; i<N; i++) cout << *(arr+i) << " ";
    cout << "}" << endl;

    index = search(key, arr, N);
    if(index == -1) cout << "Key not found";
    else cout << "Key found at index: " << index;
    return 0;
}
