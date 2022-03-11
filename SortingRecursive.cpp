#include <bits/stdc++.h>
using namespace std;

void Merge(int *arr, int l, int mid, int r)
{

    int n1 = (mid + 1) - l;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }

    for (int i = 0; i < n1; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = a[i];
        i++, k++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        j++, k++;
    }
}

void MergeSort(int *arr, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, r);

        Merge(arr, l, mid, r);
    }
    return;
}

int QuickPivot(int *arr, int l, int r)
{

    int pivot = arr[r];
    cout << pivot << endl;
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return i + 1;
}

void QuickSort(int *arr, int l, int r)
{
    if (l < r)
    {

        int pi = QuickPivot(arr, l, r);

        QuickSort(arr, l, pi - 1);
        QuickSort(arr, pi + 1, r);
    }
}

int main()
{

    /*Quick Sort...*/
    // Solution
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    QuickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    //*/

    /*Merge Sort....*
    // Solution
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    MergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    //*/

    return 0;
}