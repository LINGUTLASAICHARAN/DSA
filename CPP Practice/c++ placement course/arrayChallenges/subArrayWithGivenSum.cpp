#include <bits/stdc++.h>
using namespace std;
// try and do a trial run
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int tar = 11;

    int start = -1, end = -1, sum = 0;
    int i = 0, j = 0;
    while (j < size && sum + array[j] <= tar)
    {
        sum += array[j];
        j++;
    } // finding the sum which is just lesss than equal to target
    if (sum == tar)
    {
        cout << "start = " << i + 1 << " end = " << j;
        return 0;
    }
    while (j < size)
    { // when adding the next value obviously increases sum above target -> trying to remove from start of the sequence

        sum += array[j];
        while (sum > tar)
        { // reducing sum
            // cout << sum;
            sum -= array[i];
            // cout << " " << array[i] << endl;
            i++; // initialised only once
        }
        if (sum == tar)
        {
            start = i + 1;
            end = j + 1;
            break;
        }
        j++;
    }
    cout << "start = " << start << " end = " << end;
    return 0;
}