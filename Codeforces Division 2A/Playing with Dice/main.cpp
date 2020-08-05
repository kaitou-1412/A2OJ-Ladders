#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c1 = 0, c2 = 0, c3 = 0, diff1, diff2;
    for(int i = 1; i <= 6; i++)
    {
        diff1 = abs(i-a);
        diff2 = abs(i-b);
        if(diff1 < diff2)
            c1++;
        else if(diff1 == diff2)
            c2++;
        else
            c3++;
    }
    cout << c1 << " " << c2 << " " << c3 << "\n";
    return 0;
}
