#include <iostream>

using namespace std;

int main()
{
    int t, y1, y2, m1, m2;
    cin >> t;
    while(t--)
    {
        cin >> y1 >> m1;
        cin >> y2 >> m2;
        if((m1+m2)%12 == 0)
            cout << (y1+y2-1+(m1+m2)/12) << " 12\n";
        else
            cout << (y1+y2+(m1+m2)/12) << " " << (m1+m2)%12 << "\n";
    }
    return 0;
}
