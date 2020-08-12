#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[n][n];
    char d, s;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> a[i][j];
            if(i == 0 && j == 0)
                d = a[i][j];
            if(i == 0 && j == 1)
                s = a[i][j];
        }
    }
    if(s == d)
    {
        cout << "NO\n";
        return 0;
    }
    int flag = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i == j || i+j+1 == n)
            {
                if(a[i][j] == d)
                    flag++;
            }
            else if(a[i][j] == s)
                flag++;
        }
    }
    if(flag == n*n)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
