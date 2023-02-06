#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int ar[], int s)
{

    for (int i = 1; i <= s - 1; i++)
    {
        for (int j = 0; j < s - i; j++)
        {
            if (ar[j] > ar[j + 1])
                swap(ar[j], ar[j + 1]);
        }
    }
}
void print(int ar[], int s)
{

    for (int i = 0; i < s; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, 3, 5, 11, 10, -5, 6};

    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    print(arr, size);
    return 0;
}