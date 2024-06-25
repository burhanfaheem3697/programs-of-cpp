#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s1, s2;
        cin >> n >> s1 >> s2;
        int i = 0, j = 0;
        while (i < n || j < n)
        {
            if (s1[i] == s2[j])
            {
                cout << s1[i++];
                j++;
            }
            else if (s1[i] < s2[j])
                cout << s2[j++];
            else
                cout << s1[i++];
        }
        cout << endl;
    }

    return 0;
}
