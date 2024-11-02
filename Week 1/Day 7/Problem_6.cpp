#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        deque<char> dq;
        int b = 0;
        int B = 0;
        for (int i = str.size() - 1; i >= 0; i--)
        {
            if (str[i] == 'B')
            {
                B++;
                continue;
            }
            if (str[i] == 'b')
            {
                b++;
                continue;
            }
            if (b and islower(str[i]))
            {
                b--;
                continue;
            }
            if (B and isupper(str[i]))
            {
                B--;
                continue;
            }
            dq.push_front(str[i]);
        }
        // reverse(v.begin(), v.end());
        for (char &str : dq)
        {
            cout << str;
        }
        cout << endl;
    }
}