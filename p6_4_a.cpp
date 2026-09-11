#include <iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3], c[3][3];

    cout << "********************************************" << endl;
    cout << "           MATRIX MULTIPLICATION" << endl;
    cout << "********************************************" << endl;

    // Input First Matrix
    cout << "Enter First Matrix (3x3):" << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    // Input Second Matrix
    cout << "Enter Second Matrix (3x3):" << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }

    // Matrix Multiplication
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            c[i][j] = 0;

            for(int k = 0; k < 3; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    // Display First Matrix
    cout << endl;
    cout << "First Matrix" << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Display Second Matrix
    cout << endl;
    cout << "Second Matrix" << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    // Display Result
    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << "Resultant Matrix" << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    cout << "------------------------------------------" << endl;

    str,str{
    1,2;
    }

    return 0;
}
