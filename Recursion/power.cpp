#include<iostream>
using namespace std;
int power(int base,int exponent){
    if(exponent==0) return 1;
    return base * power(base, exponent-1);
}
int main(){
    cout<<power(2,4);
}

//TC:- O(exponent)
//SC:- O(exponent) space store ho rha hai recursion mein ishliye SC jda ho hoga