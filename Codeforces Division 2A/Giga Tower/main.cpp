#include <iostream>
#include <cmath>
#define boost ios::sync_with_stdio(false); cin.tie(0)
using namespace std;

bool lucky(int num)
{
    if(num<0)
        num = abs(num);
    int n = num%10;
    int flag = 0;
    while(num != 0)
    {
        if(n == 8)
        {
            flag = 1;
            break;
        }
        num /= 10;
        n = num%10;
    }
    if(flag == 1)
        return true;
    return false;
}


int main()
{
    boost;
    int a, b;
    cin >> a;
    if(lucky(a))
    {
        a++;
        b = 1;
    }
    else
    {
        b = 0;
    }
    while(!lucky(a))
    {
        a++;
        b++;
    }
    cout << b << "\n";
    return 0;
}
