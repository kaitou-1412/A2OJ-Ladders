#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m, v;
    cin >> n >> m;
    if(n<m)
        v = -1;
    else
    {
        v = ceil(n*1.0/2);
        int rem = v%m;
        if(rem != 0)
        {
            int number_of_twos = n/2;
            int number_of_ones_required = m - rem;
            if(number_of_ones_required <= number_of_twos)
                v += number_of_ones_required;
            else
                v = -1;
        }
    }
    cout << v << "\n";
    return 0;
}
