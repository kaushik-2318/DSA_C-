#include<iostream>
using namespace std;
void sum(int a,int b){
    if(b==0){
        cout<<a<<endl;
        return;
    }
    sum(a+b,b-1);
}
int main(){
    sum(0,6);
}