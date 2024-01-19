#include<iostream>
#include<string>
using namespace std;
int lengthOfLastWord(string s) {
    int i;
    for (int i = 0; s[i] != '\0'; i++)
    {                
        cout<<i<<" ";
        cout<<s[i]<<endl;        
    }
    int count = 0;
    while( )
    {
        i--;
        count++;
    }
    cout<<count;
}
int main(){
    string s;
    s = "Hello World";
    lengthOfLastWord(s);
}