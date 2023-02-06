#include <iostream>
using namespace std;
void prta1(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void prta2(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertionsort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && temp < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
void bubblesort(int * arr , int size){
   for(int i = 0;i< size ; i++){
       for (int j = 0; j < size; j++)
       {
          if(arr[j+1] < arr[j]){
              int temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
          }
       }
       
   }
}

int main()
{
    int array[4] = {1, 5, 3, 4};
    prta1(array, 4);
    insertionsort(array, 4);
    prta2(array, 4);
   bubblesort(array , 4);
    prta2(array, 4);

    return 0;
}