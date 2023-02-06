#include <bits/stdc++.h>
using namespace std;
void pattern1(void)
{
    int row, col;
    cout << "row , col: ";
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (j <= row - i + 1)
            {
                cout << j << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void pattern2(void)
{
    int row, col;
    cout << "row , col: ";
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
void pattern3(void)
{
    int row, col;
    cout << "row , col: ";
    cin >> row >> col;
    string side = "";
    for (int i = 0; i < row; i++)
    {
        side.append("* ");
    }

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }
        cout << side;
        cout << endl;
    }
}
void pattern4(void)
{
    int row, col;
    cout << "row , col: ";
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}
void pattern5(void)
{
    int row, col;
    cout << "row , col: ";
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= 2 * (row - i); j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}
void pattern6(void)
{
    int row, col;
    cout << "row , col: ";
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= 2 * (row - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = row; i >=1; i--)
    {
        for (int j = 1; j <= 2 * (row - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout<< "* ";
        }
        cout << endl;
    }
}
void pattern7(void) // Zig-Zag patten
{
    int n;
    cin >> n;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if( (i + j ) % 4 == 0  || (i == 2 && j % 4 == 0))   {
                cout << "* ";
            }
            else{
                cout <<"  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    pattern7();
    return 0;
}