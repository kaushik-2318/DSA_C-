#include <iostream>
#include <string>
using namespace std;
void removeChar(string ans, string original, int idx){
    if (idx==original.length())
    {
        cout<<ans;
        return;
    }
    char ch = original[idx];
    if(ch=='a') removeChar(ans,original, idx+1);
    else removeChar(ans+ch,original, idx+1);
}
int main()
{
    string str = "Kaushik Verma";
    string s = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != 'a')
            // s += str[i];
            s.push_back(str[i]);
    }
    // cout << s;
    removeChar("",str,0);
}