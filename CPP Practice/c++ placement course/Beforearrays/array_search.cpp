#include <bits/stdc++.h>
using namespace std;

int linearSearch(int n, int arr[], int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int binarySearch(int n, int key, int arr[])
{

    int start = 0, end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        // cout << mid<<endl;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
            end = mid - 1;
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << binarySearch(n, 1, array);
    return 0;
}