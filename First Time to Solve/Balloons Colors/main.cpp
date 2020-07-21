#include <iostream>

using namespace std;

int main()
{
    int t, n, x, y, a;
    cin >> t;
    while(t--)
    {
        cin >> n >> x >> y;
        int N  = n, c = 0;
        while(n--)
        {
            cin >> a;
            if(n == N-1 && a == x)
                c += 1;
            if(n == 0 && a == y)
                c += 2;
        }
        if(c == 0)
            cout << "OKAY\n";
        else if(c == 1)
            cout << "EASY\n";
        else if(c == 2)
            cout << "HARD\n";
        else if(c == 3)
            cout << "BOTH\n";
    }
    return 0;
}
