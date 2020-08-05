#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
            cin >> a[i][j];
    }
    if(n == 1)
        cout << "YES\n";
    else
    {
        int c = 0, flag = 0;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                if(i > 0 && a[i-1][j] == 'o')
                    c++;
                if(i+1 < n && a[i+1][j] == 'o')
                    c++;
                if(j > 0 && a[i][j-1] == 'o')
                    c++;
                if(j+1 < n && a[i][j+1] == 'o')
                    c++;
                if(c%2 != 0)
                {
                    flag = 0;
                    break;
                }
                flag++;
                c = 0;
            }
            if(flag == 0)
                break;
        }
        if(flag == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
