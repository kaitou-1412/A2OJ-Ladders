#include <iostream>

using namespace std;

int main()
{
    int rows, columns;
    cin >> rows >> columns;
    for(int i = 1; i <= rows; i++)
    {
        if(i%2 != 0)
        {
            for(int j = 1; j <= columns; j++)
                cout << "#";
        }
        else if((i/2)%2 != 0)
        {
            for(int j = 1; j <= columns; j++)
            {
                if(j == columns)
                    cout << "#";
                else
                    cout << ".";
            }
        }
        else
        {
            for(int j = 1; j <= columns; j++)
            {
                if(j == 1)
                    cout << "#";
                else
                    cout << ".";
            }
        }
        cout << "\n";
    }

    return 0;
}
