#include<iostream>
using namespace std;
int mazePath(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = mazePath(sr, sc+1, er, ec);
    int downWays = mazePath(sr+1, sc, er, ec);
    int totalWays = rightWays + downWays;
}
int main(){
    cout<<mazePath(0,0,2,2);
}