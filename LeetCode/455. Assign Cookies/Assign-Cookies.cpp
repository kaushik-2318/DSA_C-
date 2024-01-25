#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findContentChildren(vector<int> &g, vector<int> &s)
{
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int i = 0, j = 0;
    while (i <= g.size() && j <= s.size())
    {
        if (g[i] == s[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    return j;


    // sort(g.begin(), g.end());
    // sort(s.begin(), s.end());
    // int count = 0;
    // for (int i = 0; i <= min(g.size(), s.size()); i++)
    // {
    //     if (g[i] <= s[i])
    //     {
    //         count++;
    //     }
    // }
    // return count;
}
int main()
{
    vector<int> g = {1, 2};
    vector<int> s = {1, 2, 3};
    cout << findContentChildren(g, s) << endl;
    return 0;
}