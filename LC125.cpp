#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool ispalin(string str)
    {
        string res;
        for (char c : str)
        {
            if (isalnum(c))
            {
                res.push_back(tolower(c));
            }
        }
        return cp(res);
    }
    bool cp(string &res)
    {
        int i = 0;
        int j = res.size() - 1;
        while (i < j)
        {
            if (res[i] != res[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
int main()
{ 
    Solution obj;
    string str = "A man, a plan, a canal: Panama";
    bool result = obj.ispalin(str);
    if (result)
    {
        cout << "Palindrome" << endl;
    }
}