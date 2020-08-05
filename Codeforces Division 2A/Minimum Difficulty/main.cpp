#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int min_max_diff, max_diff, diff;
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    int k = 1;
    while(k != n-1)
    {
        max_diff = 0;
        for(int i = 1; i<n; i++)
        {
            diff = a[i] - a[i-1];
            if(i == k)
                diff += a[i+1] - a[i];
            else if(i == k+1)
                continue;
            if(max_diff < diff)
                max_diff = diff;
        }
        if(k == 1)
            min_max_diff = max_diff;
        else if(min_max_diff > max_diff)
            min_max_diff = max_diff;
        k++;
    }
    cout << min_max_diff << "\n";
    return 0;
}
