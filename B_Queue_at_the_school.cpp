#include <iostream>
using namespace std;
string swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
    cout << s;
}