#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vect = {7, 1, 5, 6, 7, 8};
    int minPrice = INT_MAX;
    int maxProfit = 0;
    for (int i : vect)
    {
        if (i < minPrice)
        {
            minPrice = i;
        }
        else
        {
            maxProfit = max(maxProfit, i - minPrice);
        }
    }
    cout << maxProfit << endl;
    return 0;
}