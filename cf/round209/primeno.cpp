#include <iostream>
#include <algorithm>
using namespace std;

#define M 1000000007

long long power(long a, long long b)
{
    long long p = 1;
    a = a % M;

    if (a == 0)
        return 0;

    while (b > 0)
    {
        if (b % 2 == 1)
        {
            p = (p * a) % M;
        }

        b /= 2;
        a = (a * a) % M;
    }

    return p;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    long x;
    cin >> n >> x;
    long a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a + n);

    long long sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
    }
    sum -= a[n - 1];

    long long prod = power(x, sum);
    cout << prod;

    return 0;
}