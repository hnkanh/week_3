#include <iostream>

using namespace std;

int main()
{
    int n, x[10001], y[10001];
    cin >> n;
    for (int i=0; i<n; i++) cin >> x[i] >> y[i];
    for (int i=0; i<n; i++)
        for (int j=n-1; j>i; j--)
        {
            if (x[i]==x[j] || y[i]==y[j])
            {
                cout << "yes";
                return 0;
            }
            if (abs(x[j]-x[i]) == abs(y[j]-y[i]))
            {
                cout << "yes";
                return 0;
            }
        }
    cout << "no";
    return 0;
}
