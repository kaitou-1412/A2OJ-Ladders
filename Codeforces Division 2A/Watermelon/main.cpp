#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num == 2 || num%2!=0)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}
