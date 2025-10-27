#include <bits/stdc++.h>
using namespace std;

int Partition(int a[], int l, int r)
{
    int pivot = a[r];
    int i = l, j = l;
    while(j < r)
    {
        if(a[j] < pivot)
        {
            swap(a[i], a[j]);
            i++;
        }
        j++;
    }
    swap(a[i], a[r]);

    return i;
}

void quicksort(int a[], int l, int r)
{
    if(l < r)
    {
        int p = Partition(a, l, r);
        quicksort(a, l, p - 1);
        quicksort(a, p + 1, r);
    }
}

int main() {

    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    quicksort(a, 0, n - 1);

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
