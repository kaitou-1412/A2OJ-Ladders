#include <iostream>
#define boost ios::sync_with_stdio(false); cin.tie(0)
using namespace std;

int main()
{
    boost;
    int n;
    cin >> n;
    int a[n];
    int n1 = 0, n2 = 0, n3 = 0, c = 0, p = 0, z = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] < 0)
            c++;
        else if(a[i] > 0)
            p++;
        else
            z++;
        if(n1 == 0 && a[i] < 0)
            n1 = i+1;
        if(n3 == 0 && a[i] == 0)
            n3 = n-i;
    }
    cout << "1 " << a[n1-1] << "\n";
    c--;
    if(c%2)
    {
        z++;
        int flag = 0;
        cout << (p+c-1);
        for(int i = 0; i<n; i++)
        {
            if(flag == 0 && i+1 != n1 && a[i] < 0)
            {
                flag = 1;
                n2 = i+1;
                continue;
            }
            if(i+1 != n1 && a[i] != 0)
                cout << " " << a[i];
        }
        cout << "\n";
        cout << z;
        for(int i = 0; i<n; i++)
        {
            if(a[i] == 0)
                cout << " " << a[i];
        }
        cout << " " << a[n2-1] << "\n";
    }
    else
    {
        cout << n-1-z;
        for(int i = 0; i<n; i++)
        {
            if(i+1 != n1 && a[i] != 0)
                cout << " " << a[i];
        }
        cout << "\n";
        cout << z;
        for(int i = 0; i<n; i++)
        {
             if(a[i] == 0)
                cout << " " << a[i];
        }
        cout << "\n";
    }
    return 0;
}
