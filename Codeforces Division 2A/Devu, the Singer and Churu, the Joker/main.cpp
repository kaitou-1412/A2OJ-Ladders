#include <iostream>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int t[n], sum = 10*(n-1);
    for(int i = 0; i < n; i++)
    {
        cin >> t[i];
        sum += t[i];
    }
    if(sum > d)
        cout << "-1\n";
    else
    {
        int  max_jokes = 2*(n-1);
        max_jokes += (d-sum)/5;
        cout << max_jokes << "\n";
    }
    return 0;
}
