#include <iostream>

using namespace std;

int main()
{
    int result, a, b, c;
    cin >> a >> b >> c;
    result = a*b*c;
    if(a == 1 && b == 1 && c == 1)
        result = 3;
    else if(a == 1 && b == 1)
        result *= 2;
    else if(a == 1 && c == 1)
        result += 2;
    else if(b == 1 && c == 1)
        result *= 2;
    else if(a == 1)
        result += c;
    else if(b == 1)
    {
        if(a > c)
            result += a;
        else
            result += c;
    }
    else if(c == 1)
        result += a;
    cout << result << "\n";
    return 0;
}
