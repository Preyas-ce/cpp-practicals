#include <iostream>
using namespace std;

int main()
{
    int a[5], b[5], c[10];

    int i = 0, j = 0, k = 0;

    cout << "********************************************" << endl;
    cout << "          MERGE SORTED ARRAYS" << endl;
    cout << "********************************************" << endl;

    // Input first sorted array
    cout << "Enter First Sorted Array:" << endl;

    for(i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    // Input second sorted array
    cout << "Enter Second Sorted Array:" << endl;

    for(i = 0; i < 5; i++)
    {
        cin >> b[i];
    }

    // Reset i
    i = 0;

    // Merge arrays
    while(i < 5 && j < 5)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }

        k++;
    }

    // Add remaining elements of first array
    while(i < 5)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    // Add remaining elements of second array
    while(j < 5)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    // Display first array
    cout << endl;
    cout << "First Array" << endl;

    for(i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    // Display second array
    cout << endl;
    cout << "Second Array" << endl;

    for(i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    // Display merged array
    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << "Merged Sorted Array" << endl;

    for(i = 0; i < 10; i++)
    {
        cout << c[i] << " ";
    }

    cout << endl;

    return 0;
}