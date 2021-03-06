#include <iostream>

using namespace std;

int main()
{
    int a, n, m, kq=1;
    cin >> a >> n >> m;
    int res = a%m;
    for (int i=1; i<=n; i++) kq = (kq*res)%m;
    cout << kq;
    return 0;
}
