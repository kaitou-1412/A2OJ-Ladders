#include <iostream>

using namespace std;

int main()
{
    int n, v;
    cin >> n >> v;
    int p[n] = {0};
    int k, s;
    for(int i = 0; i<n; i++)
    {
        cin >> k;
        for(int j = 0; j<k; j++)
        {
            cin >> s;
            if(v>s)
                p[i] = 1;
        }
    }
    int c = 0;
    for(int i = 0; i<n; i++)
    {
        if(p[i] == 1)
            c++;
    }
    cout << c << "\n";
    if(c != 0)
    {
        for(int i = 0; i<n; i++)
        {
            if(p[i] == 1)
                cout << (i+1) << " ";
        }
        cout << "\n";
    }
    return 0;
}
