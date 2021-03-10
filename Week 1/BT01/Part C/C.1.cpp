#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 0, min = 10000, sum = 0;
    double mean;
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        int num;
        cin >> num;
        sum += num;
        int temp = num;
        if(max < temp) max = temp;
        if(temp < min) min = temp;
        count++;
    }
    mean = sum * 1.0 / count;
    cout << "max: " << max << endl << "min: " << min << endl << "mean: " << mean;
    return 0;
}
