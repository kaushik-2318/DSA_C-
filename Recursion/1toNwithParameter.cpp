#include<iostream>
using namespace std;
int print(int a,int n){
    if (a>n) return 1;
    cout<<a<<endl;
    print(a+1,n);
}
int main(){
    print(1,9);
}