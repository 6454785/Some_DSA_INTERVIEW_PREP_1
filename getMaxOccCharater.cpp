#include <bits/stdc++.h>
using namespace std;
char getMaxOccurence(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;

        number = ch - 'a';

        arr[number]++;
    }

    int maxi = -1;
    int ans = 0;

    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
            ans = i;
        }
    }

    return 'a' + ans;
}

int main()
{
    string s;
    cin >> s;

    cout << "maximum occurence is of :" << getMaxOccurence(s);

    return 0;
}
