#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string student;
    int marks[n][m], flag[n] = {0};
    for(int i = 0; i<n; i++)
    {
        cin >> student;
        int j = 0;
        while(j != m)
        {
            marks[i][j] = student[j] - 48;
            j++;
        }
    }
    for(int j = 0; j<m; j++)
    {
        int maximum = 0;
        for(int i = 0; i<n; i++)
        {
            if(maximum < marks[i][j])
                maximum = marks[i][j];
        }
        for(int i = 0; i<n; i++)
        {
            if(marks[i][j] == maximum)
                flag[i] = 1;
        }
    }
    int counter = 0;
    for(int i = 0; i<n; i++)
    {
        if(flag[i] == 1)
            counter++;
    }
    cout << counter << "\n";
    return 0;
}
