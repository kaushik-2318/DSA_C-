//1 1 2 3 5 8 13 21 34 55 89
#include<iostream>
using namespace std;
int fibo(int n){
    if (n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    cout<<fibo(13);
}

//TC:- O(2^n) exponential time complexity