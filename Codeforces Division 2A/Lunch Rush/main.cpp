#include <iostream>

using namespace std;

int main()
{
    int n, k, f, t, max_joy;
    cin >> n >> k;
    cin >> f >> t;
    if(t>k)
        f -= t-k;
    max_joy = f;
    if(n>1)
    {
        for(int i = 1; i<n; i++)
        {
            cin >> f >> t;
            if(t>k)
                f -= t-k;
            if(max_joy<f)
                max_joy = f;
        }
    }
    cout << max_joy << "\n";
    return 0;
}
