#include <iostream>
#include <algorithm>
using namespace std;


struct Laptop
{
    int price, quality;
};

bool compareLaptops(Laptop a, Laptop b)
{
    return a.price < b.price;
}


int main()
{
    int n, a, b;
    cin >> n;
    Laptop l[n];
    for(int i = 0; i<n; i++)
    {
        cin >> a >> b;
        l[i].price = a;
        l[i].quality = b;
    }
    sort(l, l + n, compareLaptops);
    int flag = 0;
    for(int i = 0; i<n-1; i++)
    {
        if(l[i].quality > l[i+1].quality)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout << "Poor Alex\n";
    else
        cout << "Happy Alex\n";
    return 0;
}
