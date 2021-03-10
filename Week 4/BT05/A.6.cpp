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
    int N = 10, index = -1;

    for(int i=0; i<N; i++) *(arr+i) = (i+1) * 10;

    cout << "{";
    for(int i=0; i<N; i++) cout << *(arr+i) << " ";
    cout << "}" << endl;

    index = search(15, arr, N); // Không tồn tại
    if(index == -1) cout << "Key not found" << endl;
    else cout << "Key found at index: " << index << endl;

    index = search(10, arr, N); //Đầu
    if(index == -1) cout << "Key not found" << endl;
    else cout << "Key found at index: " << index << endl;

    index = search(100, arr, N); //Cuối
    if(index == -1) cout << "Key not found";
    else cout << "Key found at index: " << index << endl;

    index = search(50, arr, N); //Giữa
    if(index == -1) cout << "Key not found";
    else cout << "Key found at index: " << index << endl;
    return 0;
}
