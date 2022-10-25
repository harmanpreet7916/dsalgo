#include <bits/stdc++.h>
using namespace std;

//display function
void display(int arr[], int n)
{
    for (int val = 0; val < n; val++)
        cout << arr[val] << " ";
    cout << endl;
}

//selectionsort : Find the minimum element in unsorted array and swap it with element in begining
//T.C is O(n2)
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
                swap(arr[i], arr[j]);
        }
    }
    display(arr, 6);
}