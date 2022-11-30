 
#include <bits/stdc++.h>
using namespace std;

int lenoflongestnonpalindrome(string s)
{
    int max1 = 1, len = 0;
 
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1])
            len = 0;

        else if (s[i + 1] == s[i - 1] && i > 0)
            len = 1;
        else 
            len++;
        max1 = max(max1, len + 1);
    }

    if (max1 == 1)
        return 0;
    else
        return max1;
}

int main()
{
    string s = "synapse";
    cout << lenoflongestnonpalindrome(s) << "\n";
    return 0;
}
