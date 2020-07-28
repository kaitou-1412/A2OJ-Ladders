#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int counter = 0;
    while(n*m > 0)
    {
        counter++;
        n--;
        m--;
    }
    if(counter % 2 == 0)
        cout << "Malvika\n";
    else
        cout << "Akshat\n";
    return 0;
}
