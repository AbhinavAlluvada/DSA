#include <bits/stdc++.h>
using namespace std;

int lc169(vector<int> vect)
{
    int candidate = 0;
    int count = 0;
    for (int i : vect)
    {
        if (count == 0)
        {
            candidate = i;
        }
        count += (i == candidate) ? 1 : -1;
    }
    return candidate;
}
int lc1692(vector<int> &vect)
{
    unordered_map<int, int> map1;
    for (int i : vect)
    {
        map1[i]++;
    }
    int count = vect.size() / 2;
    for (int i : vect)
    {
        if (map1[i] >= count)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    vector<int> vect = {
        3,
        3,
        3,
        2,
        2,
        2,
    };
    int obj1 = lc169(vect);
    cout << "Best: " << obj1 << endl;
    int obj2 = lc1692(vect);
    cout << "Yours: " << obj2 << endl;
    return 0;
}