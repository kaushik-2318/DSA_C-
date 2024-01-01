#include<iostream>
#include<vector>
using namespace std;
void traverse(vector<int>& v, int idx){
    if (idx == v.size()) return;
    cout<<v[idx]<<" ";
    traverse(v, idx+1);
}
int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    int idx = 0;
    traverse(v, idx);
}