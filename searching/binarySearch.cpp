#include <iostream>
using namespace std;


int check(int arr[], int key, int *start, int *end, int *pivot)
{

    if (arr[*pivot] < key)
    {
        *start = *pivot + 1;
    }
    if (arr[*pivot] > key)
    {
        *end = *pivot - 1;
    }
}


int BinSrc(int arr[], int n,int key)
{
    int start;
    int end;
    int pivot;
    for (int  i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
        else if(arr[i]==key)
        [
            
        ]
                
    }
    
}


int BinarySearch(int arr[], int key, int n)
{

    int pivot = n / 2;
    int start = 0;
    int end = n - 1;
    int i;

    while (start < end)
    {
        if (arr[pivot] == key)
        {
            return i;
        }
        else
        {
            check(arr, key, &start, &end, &pivot);
        }
    }
}

int main()
{
    int arr[] = {2, 34, 5, 6, 7, 2};
    int num = sizeof(arr) / sizeof(int);
    int key = 2;
    int result = BinarySearch(arr, key, num);
    cout << "----------------------------" << endl
         << "the result is " << result << endl;

    return 0;
}

