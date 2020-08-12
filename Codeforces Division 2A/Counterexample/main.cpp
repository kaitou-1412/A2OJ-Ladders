#include <iostream>

using namespace std;

//bool check_coprime(long long int a, long long int b)
//{
//    int flag = 0;
//    for(long long int i = 1; i<=a; i++)
//    {
//        if(a%i == 0 && b%i == 0)
//            flag++;
//        if(flag > 1)
//            break;
//    }
//    if(flag == 1)
//        return true;
//    return false;
//}

int main()
{
    long long int l, r, a = 0, b = 0, c = 0;
    cin >> l >> r;
//    int flag = 0;
//    for(long long int i = l; i<r-1; i++)
//    {
//        for(long long int j = i+1; j<r; j++)
//        {
//            for(long long int k = j+1; k<=r; k++)
//            {
//                if(check_coprime(i,j) && check_coprime(j,k) && (!check_coprime(i,k)))
//                {
//                    a = i;
//                    b = j;
//                    c = k;
//                    flag = 1;
//                    break;
//                }
//            }
//            if(flag == 1)
//                break;
//        }
//        if(flag == 1)
//            break;
//    }
//    if(flag == 0)
//        cout << "-1\n";
//    else
//        cout << a << " " << b << " " << c << "\n";
    if (r - l + 1 < 3)
    {
	 	cout << -1 << endl;
	 	return 0;
	}
	if (l % 2 == 0)
    {
	 	cout << l << ' ' << l + 1 << ' ' << l + 2 << endl;
	 	return 0;
	}
	if (r - l + 1 > 3)
    {
	 	cout << l + 1 << ' ' << l + 2 << ' ' << l + 3 << endl;
	 	return 0;
	}
	cout << -1 << endl;
    return 0;
}
