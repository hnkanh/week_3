#include <iostream>

using namespace std;

int timkiem (int a[], int left, int right, int x)
{
    if (left > right) return -1;
    int mid = (left+right)/2;
    if (x == a[mid]) return mid;
    if (x > a[mid]) return timkiem(a, mid+1, right, x);
    if (x < a[mid]) return timkiem(a,left, mid-1, x);
}
int main()
{
    int n, x;
    cin >> n >> x;
    int a[100001];
    for (int i=0; i<n; i++) cin >> a[i];
    if (timkiem(a, 0, n-1, x) == -1) cout << "NO";
    else cout << "YES";
    return 0;
}
