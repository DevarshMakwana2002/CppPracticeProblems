#include <iostream>
using namespace std;

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    int arr[n];
    long long int sum = b;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] = min(arr[i], a - 1);
        sum += arr[i];
    }
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        solve();
        t--;
    }
    return 0;
}