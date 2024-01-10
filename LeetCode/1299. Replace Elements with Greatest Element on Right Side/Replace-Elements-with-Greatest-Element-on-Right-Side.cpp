#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int display(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int replaceElements_BrutalForce(vector<int> &arr)
{
    vector<int> arr1;
    for (int i = 0; i < arr.size(); i++)
    {
        int a = -1;
        for (int j = i + 1; j < arr.size(); j++)
        {
            a = max(a, arr[j]);
        }
        arr1.push_back(a);
    }
    display(arr1);
}
int replaceElements_Optimise(vector<int> &arr){
    int max = -1;
}
int main()
{
    vector<int> arr = {17, 18, 5, 4, 6, 1};
    replaceElements_BrutalForce(arr);
}
