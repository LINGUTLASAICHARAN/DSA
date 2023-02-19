#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int s1 = start, e1 = mid, s2 = mid + 1, e2 = end;
    int size = end - start + 1; // size of buffer
    int buff[size];// buffer required to avoid rewriting elements in the array
    int pos = 0, i = s1, j = s2; // two pointer method
    while (i <= e1 && j <= e2)
    {
        if (arr[i] < arr[j])
        {
            buff[pos] = arr[i];
            i++;
        }
        else
        {
            buff[pos] = arr[j];
            j++;
        }
        pos++;
    }
    if (i <= e1)
    {
        while (i <= e1)
        {
            buff[pos] = arr[i];
            pos++;
            i++;
        }
    }
    else
    {
        while (j <= e2)
        {
            buff[pos] = arr[j];
            pos++;
            j++;
        }
    }
    for (int i = s1,j=0; i <= e2; i++,j++) // buff is 0 indexed so using j for accessing it
    {
        arr[i] = buff[j]; // copying back from buffer to array
    }
    return;
}
void mergeSort(int arr[], int start, int end)
{
    if (start == end) // only 1 element base case no sprting reruired
        return;

    int mid = (start + end) / 2;
    mergeSort(arr, start, mid); // dividing into halves half 1
    mergeSort(arr, mid + 1, end);// half 2
    merge(arr, start, mid, end);// merge both sorted parts
}
int main()
{
    int arr[] = {2, 5, 3, 1, 4, 2,101,100,99,98};
    int n = 10;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}