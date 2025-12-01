#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    for(int i=0; i<=n; i++)
    {
        string s,t;
        cin >> s >> t;
        int len = max(s.size(), t.size());
        for (int i=0; i<len; i++)
        {
            if (i < s.size()) 
            {
                cout << s[i];
            }
            if (i < t.size()) 
            {
                cout << t[i];
            }
        }
        cout << endl;
    }
    return 0;
}
