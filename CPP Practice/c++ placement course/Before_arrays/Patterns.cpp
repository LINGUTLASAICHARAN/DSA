#include <bits/stdc++.h>
using namespace std;
void pattern1(void)
{
    int row, col;
    cout << " row col ";
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    int row, col;
    cout << " row col ";
    cin >> row >> col;

    // --------------------------------------------- pattern2
    // for (int i = 0; i < row; i++)
    // {
    //     if (i == 0 || i == row - 1)
    //     {
    //         for (int j = 0; j < col; j++)
    //         {
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    //     else
    //     {
    //         cout << "* ";
    //         for (int i = 0; i < col - 2; i++)
    //         {
    //             cout << "  ";
    //         }
    //         cout << "* \n";
    //     }
    // }
    // --------------------------------------------------------pattern 3  inverted haf pyramid
    // for (int i = row; i >= 1; i--)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // --------------------------------------------------------pattern 4 180 degree rotatred patttern 3
    // for (int i = 1; i <= row ; i++)
    // {
    //     for (int j = 1; j <= row ; j++)
    //     {
    //        if(row - i >= j){
    //         cout << "  ";
    //        }
    //        else{
    //         cout <<"* ";
    //        }
    //     }

    //     cout << endl;
    // }
    // --------------------------------------------------------pattern 5 half pyramid using numbers
    // for (int i = 1; i <= row ; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i <<" ";
    //     }
    //     cout << endl;
    // }
    // -------------------------------------------------------floyds triangle
    // int num = 0;
    // for (int i = 1; i <= row; i++)
    // {

    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << ++num << " ";
    //     }
    //     cout << endl;
    // }
    // -----------------------------------------------------------Butterfly pattern
    for (int i = 1; i <= 2 * row; i++)
    {
        for (int j = 1; j <= 2 * row; j++)
        {
            if (i <= row && j <= row)
            {
                if (j <= i)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            if (i <= row && j >= row+1)
            {
                if (j - row <= row - i)
                {
                    cout << "  ";
                }
                else
                {
                    cout << "* ";
                }
            }
            if (i >= row+1  && j <= row)
            {
                if (j <= row - i + row + 1 )
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            if (i >= row + 1 && j >= row + 1)
            {
                if (j >= i)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}