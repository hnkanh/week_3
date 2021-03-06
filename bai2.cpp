#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int check[100001];
    for (int i=2; i<=n; i++) check[i] = 1;
    for (int i=2; i<=n; i++) if (check[i] == 1)
    {
        for (int j=2*i; j<=n; j+=i) check[j] = 0;
    }
    for (int i=2; i<=n; i++) if (check[i] == 1) cout << i << " ";
    return 0;
}
