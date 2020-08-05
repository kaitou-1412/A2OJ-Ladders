#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> p, q, r;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1)
            p.push_back(i+1);
        else if(a[i] == 2)
            q.push_back(i+1);
        else if(a[i] == 3)
            r.push_back(i+1);
    }
    if(p.size() == 0 || q.size() == 0 || r.size() == 0)
        cout << "0\n";
    else
    {
        int size_1 = p.size(), size_2 = q.size(), size_3 = r.size();
        int m = min(size_1, min(size_2, size_3));
        cout << m << "\n";
        for(int i = 0; i<m; i++)
            cout << p[i] << " " << q[i] << " " << r[i] << "\n";
    }
    return 0;
}
