#include <iostream>
using namespace std;
int main()
{
   long long n;
    cin >> n;
    long long s1, s2, sum;
    if (n % 2 == 0)
    {
        n = n / 2;
        s1 = n * n;
        s2 = n * (n + 1);
        sum = -s1 + s2;
    }
    else
    {
        n = n / 2;
        s1 = (n + 1) * (n + 1);
        s2 = n *(n + 1);
        sum = -s1 + s2;
    }
    cout << sum;
}