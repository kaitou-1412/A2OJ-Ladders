#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int chest = 0, biceps = 0, back_ex = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        if((i+1)%3 == 1)
            chest += a;
        else if((i+1)%3 == 2)
            biceps += a;
        else
            back_ex += a;
    }
    if(chest >= biceps && chest >= back_ex)
        cout << "chest\n";
    else if(biceps >= chest && biceps >= back_ex)
        cout << "biceps\n";
    else
        cout << "back\n";
    return 0;
}
