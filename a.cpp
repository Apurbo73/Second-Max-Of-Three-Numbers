#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {

        int s[3];
        for (int i = 0; i < 3; i++)
        {
            int b;
            cin >> b;
            s[i] = b;
        }
        sort(s, s + 3);
        cout << s[1] << endl;
    }
}