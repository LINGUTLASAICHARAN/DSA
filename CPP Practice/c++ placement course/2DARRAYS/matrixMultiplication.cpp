#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int m1[n1][n2], m2[n2][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> m1[i][j];
        }
    }
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> m2[i][j];
        }
    }
    int m3[n1][n3];
    // naive matrix multiplication
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            int sum = 0;
            for (int k = 0; k < n2; k++)
            {
                sum += m1[i][k] * m2[k][j];
            }
            m3[i][j] = sum;
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}