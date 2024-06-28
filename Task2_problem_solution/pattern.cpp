#include <bits/stdc++.h>
using namespace std;

char convert(int n)
{
    return 'a' + n - 1;
}

int main()
{
    int n;
    char t;
    cin >> n >> t;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j <= n; j++)
            {
                if (t == 'a')
                    cout << convert(j);
                else
                    cout << j;
            }
        }
        else if (i == n)
        {
            for (int j = n; j >= 1; j--)
            {
                if (t == 'a')
                    cout << convert(j);
                else
                    cout << j;
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 1)
                {
                    if (t == 'a')
                        cout << convert(i);
                    else
                        cout << i;
                }
                else if (j == n)
                {
                    if (t == 'a')
                        cout << convert(n - i + 1);
                    else
                        cout << i;
                }
                else
                    cout << ' ';
            }
        }
        cout << endl;
    }
}