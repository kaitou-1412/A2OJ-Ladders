#include <iostream>
#define boost ios::sync_with_stdio(false); cin.tie(0)
using namespace std;

int main()
{
    boost;
    int n, wins = 1, wins2 = 0;
    cin >> n;
    string s, s2, s2real;
    cin >> s;
    n--;
    while(n--)
    {
        cin >> s2;
        if(s == s2)
            wins++;
        else
        {
            wins2++;
            s2real = s2;
        }

    }
    if(wins > wins2)
        cout << s << "\n";
    else
        cout << s2real << "\n";
    return 0;
}
