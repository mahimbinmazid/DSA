#include <bits/stdc++.h>
using namespace std;
int binarysearch(int ar[], int n, int key)
{
    int start, end, mid;
    start = 0, end = n - 1;
    while (start <= end)
    {
        mid = (start) + (end - start)/ 2;
        if (ar[mid] == key)
        {
            return mid;
        }
        else if (ar[mid] < key)
        {
            start = mid + 1;
        }
        else if (ar[mid] > key)
        {
            end = mid - 1;
        }
        
    }
    return -1;
}

int main()
{
    int n, key;
    cin >> n>> key;
    int ar[100];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int x = binarysearch(ar, n, key);

    cout << x;

    return 0;
}