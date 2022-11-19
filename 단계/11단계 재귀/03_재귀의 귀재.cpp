#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        int c = 0;
        int l = 0;
        int r = s.length() - 1;
        bool flag = true;
        for (; l <= r; l++, r--)
        {
            c++;

            if (s[l] != s[r])
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? 1 : 0) << " " << (flag && s.length() % 2 == 0 ? c + 1 : c) << "\n";
    }
}
