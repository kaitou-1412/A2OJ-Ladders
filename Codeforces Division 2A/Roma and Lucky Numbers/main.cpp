#include <iostream>

using namespace std;

int check_lucky_digits(int a, int k)
{
    int digit = 0, flag = 0;
    while(a!=0)
    {
        digit = a%10;
        if(digit == 4 || digit == 7)
            flag++;
        a = a/10;
    }
    if(flag<=k)
        return 1;
    return 0;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a, counter = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        counter += check_lucky_digits(a, k);
    }
    cout << counter << "\n";
    return 0;
}
