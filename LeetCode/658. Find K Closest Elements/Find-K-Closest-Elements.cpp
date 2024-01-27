class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        int n = arr.size();
        vector<int> ans(k);
        // Case 1
        if (arr[0] > x)
        {
            for (int i = 0; i < k; i++)
            {
                ans[i] = arr[i];
            }
            return ans;
        }
        // Case 2
        if (arr[n - 1] < x)
        {
            for (int i = 0; i < k; i++)
            {
                ans[i] = arr[n - k + i];
            }
            return ans;
        }

        int lo = 0;
        int hi = n - 1;
        bool flag = false;
        int t = 0; // representing current index of ans
        int mid = -1;
        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (arr[mid] == x)
            {
                flag = true;
                ans[t] = arr[mid];
                t++;
                break;
            }
            else if (arr[mid] < x)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        int lb = hi;
        int ub = lo;

        if (flag == true)
        {
            lb = mid - 1;
            ub = mid + 1;
        }

        while (t < k && lb >= 0 && ub <= n - 1)
        {
            if (abs(x - arr[lb]) <= abs(x - arr[ub]))
            {
                ans[t] = arr[lb];
                lb--;
            }
            else
            {
                ans[t] = arr[ub];
                ub++;
            }
            t++;
        }
        if (lb < 0)
        {
            while (t < k)
            {
                ans[t] = arr[ub];
                ub++;
                t++;
            }
        }
        if (ub > n - 1)
        {
            while (t < k)
            {
                ans[t] = arr[lb];
                lb--;
                t++;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// #include <iostream>
// #include <vector>
// #include <cstdlib>
// #include <algorithm>

// using namespace std;
// int print(vector<int> &arr)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int findClosestElements(vector<int> &arr, int k, int x)
// {
//     int n = arr.size();
//     vector<int> ans(k);
//     // Case 1
//     if (arr[0] > x)
//     {
//         for (int i = 0; i < k; i++)
//         {
//             ans[i] = arr[i];
//         }
//         // return ans;
//         print(ans);
//     }
//     // Case 2
//     if (arr[n - 1] < x)
//     {
//         // for (int i = 0; i < k; i++)
//         // {
//         //     ans[i] = arr[n - k + i];
//         // }
//         // return ans;
//         int i = n - 1;
//         int j = k - 1;
//         while (j >= 0)
//         {
//             ans[j] = arr[i];
//             j--;
//             i--;
//         }

//         print(ans);
//     }

//     int lo = 0;
//     int hi = n - 1;
//     bool flag = false;
//     int t = 0; // representing current index of ans
//     int mid = -1;
//     while (lo <= hi)
//     {
//         mid = lo + (hi - lo) / 2;
//         if (arr[mid] == x)
//         {
//             flag = true;
//             ans[t] = arr[mid];
//             t++;
//             break;
//         }
//         else if (arr[mid] > x)
//             hi = mid - 1;
//         else
//             lo = mid + 1;
//     }
//     int lb = hi;
//     int ub = lo;

//     if (flag == true)
//     {
//         lb = mid - 1;
//         ub = mid + 1;
//     }

//     while (t < k && lb >= 0 && ub <= n - 1)
//     {
//         if (abs(x - arr[lb]) <= abs(x - arr[ub]))
//         {
//             ans[t] = arr[lb];
//             lb--;
//         }
//         else
//         {
//             ans[t] = arr[ub];
//             ub++;
//         }
//         t++;
//     }
//     if (lb < 0)
//     {
//         while (t < k)
//         {
//             ans[t] = arr[ub];
//             ub++;
//             t++;
//         }
//     }
//     if (ub > n - 1)
//     {
//         while (t < k)
//         {
//             ans[t] = arr[lb];
//             lb--;
//             t++;
//         }
//     }
//     sort(ans.begin(), ans.end());
//     // return ans;
//     print(ans);
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int k = 4, x = 3;
//     findClosestElements(arr, k, x);
// }