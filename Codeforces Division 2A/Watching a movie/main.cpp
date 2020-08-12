#include <iostream>

using namespace std;

int main()
{
    int n, x, min_mins = 0;
    cin >> n >> x;
    int l, r, counter = 1;
    while(n--)
    {
        cin >> l >> r;
        while(counter+x<=l)
            counter += x;
        min_mins += r-counter+1;
        counter = r+1;
    }
    cout << min_mins << "\n";
    return 0;
}
