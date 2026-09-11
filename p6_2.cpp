#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "********************************************" << endl;
    cout << "       SPORTS EVENT SCORE ANALYSIS" << endl;
    cout << "********************************************" << endl;

    cout << "Enter Number of Participants: ";
    cin >> n;

    string id[100], name[100];
    int score[100];

    // Input
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Participant ID: ";
        cin >> id[i];

        cout << "Enter Participant Name: ";
        cin >> name[i];

        cout << "Enter Score: ";
        cin >> score[i];
    }

    // ---------------- SEARCH ----------------

    string searchID;
    cout << "\n--------------------------------------" << endl;
    cout << "Search Participant" << endl;
    cout << "Enter Participant ID: ";
    cin >> searchID;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (id[i] == searchID)
        {
            cout << "\nParticipant Found" << endl;
            cout << "--------------------------------------" << endl;
            cout << "ID    : " << id[i] << endl;
            cout << "Name  : " << name[i] << endl;
            cout << "Score : " << score[i] << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nParticipant Not Found" << endl;
    }

    // ---------------- SORTING ----------------

    // Descending order of score
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (score[i] < score[j])
            {
                // Swap scores
                int tempScore = score[i];
                score[i] = score[j];
                score[j] = tempScore;

                // Swap IDs
                string tempID = id[i];
                id[i] = id[j];
                id[j] = tempID;

                // Swap names
                string tempName = name[i];
                name[i] = name[j];
                name[j] = tempName;
            }
        }
    }

    // ---------------- RANKING ----------------

    cout << "\n--------------------------------------" << endl;
    cout << "           Ranking List" << endl;
    cout << "--------------------------------------" << endl;

    cout << "Rank\tName\tScore" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "\t"
             << name[i] << "\t"
             << score[i] << endl;
    }

    // ---------------- TOP THREE ----------------

    cout << "\n--------------------------------------" << endl;
    cout << "       Top Three Performers" << endl;
    cout << "--------------------------------------" << endl;

    int limit;

    if (n < 3)
        limit = n;
    else
        limit = 3;

    for (int i = 0; i < limit; i++)
    {
        cout << i + 1 << ". "
             << name[i] << " - "
             << score[i] << endl;
    }

    return 0;
}