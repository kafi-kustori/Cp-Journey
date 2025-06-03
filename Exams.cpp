#include<iostream>
 using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x, y, z;
        cin >> x >> y >> z;
        double pass = ((z / ( x * y) ) * 100);
        if (pass > 50)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}