#include <iostream>
#include <vector>
using namespace std;
int display(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int replaceElements(vector<int> &arr)
{
    int n = arr.size();
    // vector<int> arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        int max = 0;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }
        arr[i] = max;
    }
    arr[arr.size() - 1] = -1;

    display(arr);
}
int main()
{
    vector<int> arr{17, 18, 5, 4, 6, 1};
    replaceElements(arr);
}