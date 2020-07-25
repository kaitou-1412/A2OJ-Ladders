#include <iostream>

using namespace std;

int main()
{
    string check = "hello";
    string word;
    cin >> word;
    int a = 0;
    for(int i = 0; i< word.length(); i++)
    {
        if(word[i] == check[a])
            a++;
    }
    if(a==5)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
