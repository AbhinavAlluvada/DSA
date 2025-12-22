#include <bits/stdc++.h>
using namespace std;
class test
{
public:
    vector<int> plus(vector<int> &vect)
    {
        int n = vect.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (vect[i] < 9)
            {
                vect[i]++;
                return vect;
            }
            vect[i] = 0;
        }
        vect.insert(vect.begin(), 1);
        return vect;
    }
    void print(const vector<int> &vect)
    {
        for (int i : vect)
        {
            cout << i << " ";
        }
        cout << endl;
    }
};
int main()
{
    vector<int> vect = {1, 2, 4};
    vector<int> vect2 = {1, 2, 9};
    vector<int> vect3 = {9};

    test obj;
    vector<int> test1 = obj.plus(vect);
    vector<int> test2 = obj.plus(vect2);
    vector<int> test3 = obj.plus(vect3);

    obj.print(test1);
    obj.print(test2);
    obj.print(test3);
    return 0;
}