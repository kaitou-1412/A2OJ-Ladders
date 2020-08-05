#include <iostream>

using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;
    int x[n];
    for(int i = 0; i < n; i++)
        cin >> x[i];
    int max_diff = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(x[i] > x[i+1] && max_diff < x[i] - x[i+1])
            max_diff = x[i] - x[i+1];
    }
    if(max_diff <= c)
        cout << "0\n";
    else
        cout << (max_diff - c) << "\n";
    return 0;
}
