#include <iostream>
using namespace std;
int power(int base, int exponent)
{
    if (exponent == 1)
        return base;
    int ans = power(base, exponent / 2);
    if (exponent % 2 == 0)
        return ans * ans;
    if (exponent % 2 != 0)
        return ans * ans * base;
}
int main()
{
    cout << power(3, 3);
}

//TC:- O(log(n))
//SC:- o(log(n))