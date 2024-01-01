#include<iostream>
using namespace std;
void PrintmazePath(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec) return; //Destination not reached
    if(sr==er && sc==ec) cout<<s<<endl; //Destination reached
    PrintmazePath(sr, sc+1, er, ec, s+'R');
    PrintmazePath(sr+1, sc, er, ec, s+'D');
    
}
int main(){
    PrintmazePath(0,0,5,5,"");
}