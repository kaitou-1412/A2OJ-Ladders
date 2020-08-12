#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i<n; i++)
        cin >> a[i];
    for(int i = 0; i<m; i++)
        cin >> b[i];
    int v = max(*min_element(a, a+n)*2, *max_element(a, a+n)), c = *min_element(b, b+m);
    if(v<c)
        cout << v << "\n";
    else
        cout << "-1\n";
    return 0;
}
