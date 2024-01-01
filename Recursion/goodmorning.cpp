#include <iostream>
using namespace std;
void good(int n)
{
    if(n==0) return;
    cout << "Good Morning"<<endl;
    good(n-1);
}
int main()
{
    int n;
    cin >> n;
    good(n);
}