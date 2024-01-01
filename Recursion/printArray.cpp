#include<iostream>
using namespace std;
void traverse(int arr[], int n, int idx){
    if (idx==n) return;
    cout<<arr[idx]<<" ";
    traverse(arr, n, idx+1);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx = 0;
    traverse(arr, n, idx);
}