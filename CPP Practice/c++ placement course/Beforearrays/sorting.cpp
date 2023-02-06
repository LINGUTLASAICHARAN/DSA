#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int n)
{
    cout << endl
         << "printing array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
void selectionSort(int n, int arr[])
{

    /*
       // select smallest from unsorted and place it in sorted but the selection is done by repeatedly swapping and placing the
       right value at position i which is why i does not go to last because sorting the n-1 will ahve attained the order already


    */
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
                swap(arr[i], arr[j]);
        }
    }
}
void bubbleSort(int n, int array[])
{ // keep sending the highest value to the top like a bubble floats in water
    for (int counter = 1; counter <= n - 1; counter++) //do it n-1 times
    {
        for (int j = 0; j < n - counter; j++)
        {
            if (array[j] > array[j + 1])
                swap(array[j], array[j + 1]);
        }
    }
}
void insertionSort(int n, int array[]) // ascending order
{
    for (int i = 1; i < n; i++) // starting from pos 1 keep finding place for every element .not startig from 0 because assuming it is sorted
    {
         int temp = array[i]; // element to be placed is collected
        int j = i - 1; // start of the sorted array
        while (j >= 0 && (array[j] > temp)) // looking in the sorted array for the position j + 1
        {   
            array[j+1] = array[j];// eiher you can push the j into j+1 and finally put the temp into its place or keep swapping in the first place
            // swap(array[j+1] , array[j]); // moving the greater element to higher positon leaving j position vacant but swap is computationally heavy
            j--;
        }
         array[j+1] = temp; // loop breaks when j has a lower element in the position so inserting in the next position which was previously moved forward

    }
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
    insertionSort(n, array);
    print(array, n);
    return 0;
}