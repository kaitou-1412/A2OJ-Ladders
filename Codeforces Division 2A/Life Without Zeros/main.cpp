#include <iostream>
#define boost ios::sync_with_stdio(false); cin.tie(0)
using namespace std;

long long int removeZeroes(long long int a)
{
    long long int newa = 0, power = 1;
    while(a != 0)
    {
        if(a%10 != 0)
        {
            newa += power*(a%10);
            power *= 10;
        }
        a /= 10;
    }
    return newa;
}


int main()
{
    boost;
    long long int a, b, res1, res2;
    cin >> a >> b;
    res1 = a+b;
    res2 = removeZeroes(a) + removeZeroes(b);
    if(removeZeroes(res1) == res2)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
