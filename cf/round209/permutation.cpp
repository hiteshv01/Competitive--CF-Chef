#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        if (i <= k)
        {
            cout << (2 * i) << " " << (2 * i - 1) << " ";
        }
        else
        {
            cout << (2 * i - 1) << " " << (2 * i) << " ";
        }
    }
}