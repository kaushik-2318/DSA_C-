#include<iostream>
#include <limits.h>
using namespace std;
void printMAX(int arr[], int n, int idx, int max){
    if (idx==n){
        cout<<max;
        return;
    }
    if (max<arr[idx]) max = arr[idx];
    printMAX(arr, n, idx+1,max);
}
int maxInArray(int arr[], int n, int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxInArray(arr,n,idx+1));
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx = 0;
    // printMAX(arr, n, idx, INT_MIN);
    cout<<maxInArray(arr,n,idx);
}