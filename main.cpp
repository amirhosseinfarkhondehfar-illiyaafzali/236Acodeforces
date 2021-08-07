#include <iostream>

using namespace std;

int main()
{
    int a[26];
    for (int i = 0; i < 26; i++)
    {
        a[i]=0;
    }
    
    int count = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        char ss;
        ss = s[i];
        if (a[ss - 'a'] == 0)
        {
            a[ss - 'a']++;
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}