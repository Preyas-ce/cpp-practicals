#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;

    cout << "********************************************" << endl;
    cout << "       SPORTS EVENT SCORE ANALYSIS" << endl;
    cout << "********************************************" << endl;

    cout << "Enter Number of Participants: ";
    cin >> n;

    string id[n];
    string name[n];
    int score[n];

    // Accept participant details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Participant ID: ";
        cin >> id[i];

        cout << "Enter Participant Name: ";
        cin >> name[i];

        cout << "Enter Score: ";
        cin >> score[i];
    }

    // Calculate total, highest and lowest
    int total = 0;
    int highest = score[0];
    int lowest = score[0];

    for (int i = 0; i < n; i++)
    {
        total = total + score[i];

        if (score[i] > highest)
        {
            highest = score[i];
        }

        if (score[i] < lowest)
        {
            lowest = score[i];
        }
    }

    double average = (double)total / n;

    // Display records
    cout << "\n----------------------------------------------" << endl;
    cout << "           Participant Performance" << endl;
    cout << "----------------------------------------------" << endl;

    cout << left << setw(10) << "ID"
         << setw(15) << "Name"
         << "Score" << endl;

    cout << "----------------------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << left << setw(10) << id[i]
             << setw(15) << name[i]
             << score[i] << endl;
    }

    cout << "----------------------------------------------" << endl;

    cout << "Total Score: " << total << endl;
    cout << fixed << setprecision(2);
    cout << "Average Score: " << average << endl;
    cout << "Highest Score: " << highest << endl;
    cout << "Lowest Score: " << lowest << endl;

    return 0;
}