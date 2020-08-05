#include <iostream>

using namespace std;

int main()
{
    int n, flag = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++)
        cin >> a[i];
    for(int i = 1; i<n-1; i++)
    {
        if(a[i-1]%2 != a[i]%2 && a[i]%2 != a[i+1]%2)
        {
            flag = i+1;
            break;
        }
    }
    if(flag == 0)
    {
        if(a[0]%2 != a[1]%2)
            flag = 1;
    }
    if(flag == 0)
    {
        flag = n;
    }
    cout << flag << "\n";
    return 0;
}
