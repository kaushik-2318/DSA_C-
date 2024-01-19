#include <iostream>
#include<vector>
#include<string>
using namespace std;
string longestCommonPrefix(vector<string> &strs) {
    for (string x: strs){
        cout<<x;
        for (char c: x)
        {
            
        }
        
    }
    
}
int main() {
    vector<string> strs = {"flower","flow","flight"};
    longestCommonPrefix(strs);
}