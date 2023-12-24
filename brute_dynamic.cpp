#include <iostream>
#include <algorithm>
#include <vector>
#include <chrono>
#include <random>

using namespace std;
using namespace std::chrono;

void
printArray(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void
printSubsequences(vector<int> arr, int index, vector<int> subarr, vector<int> &arr_sum, 
                       int &final, vector<int> &arr_sub)
{
    int sum = 0;
    int sum2 = 0;

    if (index == arr.size())
    {
        int l = subarr.size();
        if (l != 0)
        {
            printArray(subarr, l);
        }
    }
    else
    {
        printSubsequences(arr, index + 1, subarr, arr_sum, final, arr_sub);
        subarr.push_back(arr[index]);
        for (int h : subarr)
        {
            sum += h;
        }

        arr_sum.push_back(sum);
        final = *max_element(arr_sum.begin(), arr_sum.end());
        for (int m : subarr)
        {
            if (m > 0)
            {
                arr_sub.push_back(m);
                sum2 += m;
            }
        }

        if (sum2 != final)
        {
            arr_sub.clear();
        }

        printSubsequences(arr, index + 1, subarr, arr_sum, final, arr_sub);
    }
}

void
dynamicSubsequence(vector<int> arr)
{
    int Max = *max_element(arr.begin(), arr.end());
    std::chrono::high_resolution_clock::time_point start_ds;
    std::chrono::high_resolution_clock::time_point stop_ds;

    start_ds = high_resolution_clock::now();
    if (Max < 0) 
    {
        cout << Max;
        return;
    }

    int sum = 0;
    for (int i : arr)
    {
        if (i >= 0)
        {
            if (i == 0)
            {
                continue;
            }
            else
            {
                cout << i << " ";
            }
            sum += i;
        }
    }

    stop_ds = high_resolution_clock::now();
    auto duration_ds = std::chrono::duration_cast<microseconds>(stop_ds - start_ds);
    cout << "\n" << sum << "\n";
    cout << "execution time: " << duration_ds.count() << " microseconds" << endl;
}

void
bruteForce(vector<int> arr, int &max_sum)
{
    int modification = 0;
    std::chrono::high_resolution_clock::time_point start_bf;
    std::chrono::high_resolution_clock::time_point stop_bf;

    start_bf = high_resolution_clock::now();
    if (!arr.empty())
    {
        for (int o : arr)
        {
            modification += o;
            if (o == 0)
            {
                continue;
            }
            else
            {
                cout << o << " ";
            }
            if (modification == max_sum)
            {
                break;
            }
        }

        cout << endl;
    }

    stop_bf = high_resolution_clock::now();
    auto duration_bf = std::chrono::duration_cast<microseconds>(stop_bf - start_bf);
    cout << max_sum << "\n";
    cout << "execution time: " << duration_bf.count() << " microseconds" << "\n\n";
}

int
main()
{
    random_device rseed;
    mt19937 rng(rseed()); // Mersenne number (2^n - 1)
    uniform_int_distribution<int> dist(-10000, 10000);
    vector<int> sub_array;
    vector<int> sub_array2;
    vector<int> sub_array3;
    vector<int> main_arr;
    int modification = 0;
    int maximum_sum = 0;

    for (int i = 0; i < 3; i++)
    {
        main_arr.push_back(dist(rng));
    }

    if (!main_arr.empty())
    {
        cout << "with brute force:" << endl;
        printSubsequences(main_arr, 0, sub_array, sub_array, maximum_sum, sub_array3);
        bruteForce(sub_array3, maximum_sum);
       
        cout << "with dynamic:" << endl;
        dynamicSubsequence(main_arr);
    }
    else
    {
        cout << "array is empty";
    }

    return 0;
}