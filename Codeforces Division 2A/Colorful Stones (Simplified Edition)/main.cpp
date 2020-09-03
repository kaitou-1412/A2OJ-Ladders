#include <iostream>
#define boost ios::sync_with_stdio(false); cin.tie(0)
using namespace std;

int main()
{
    boost;
    string s, t;
    cin >> s >> t;
    int i = 0, j = 0, m = t.length(), n = s.length();
    while(j < m && i < n)
    {
        if(s[i] == t[j]) i++;
        j++;
    }
    cout << (i+1) << "\n";
    return 0;
}
