#include <bits/stdc++.h>
using namespace std;

int bSearch(int arr[], int l, int r, int target)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for(i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

int main()
{   
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int target;
    cin >> target;
    int result = bSearch(arr, 0, n - 1, target);
    if (result != -1)
    {

        cout << "\nElement found at index " << result;
    }
    else
    {
        cout << "\nElement not found in array";
    }

    return 0;
}