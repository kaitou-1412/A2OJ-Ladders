#include <iostream>

using namespace std;

int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1 == x2)
    {
        y3 = y1;
        y4 = y2;
        x3 = x2 + y2 - y1;
        x4 = x2 + y2 - y1;
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << "\n";
    }
    else if(y1 == y2)
    {
        x3 = x1;
        x4 = x2;
        y3 = x2 + y2 - x1;
        y4 = x2 + y2 - x1;
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << "\n";
    }
    else if(x1 + y2 == y1 + x2 || x1 + y1 == x2 + y2)
    {
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << "\n";
    }
    else
        cout << "-1\n";
    return 0;
}
