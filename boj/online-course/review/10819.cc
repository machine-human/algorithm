#include <iostream>
#include <algorithm>
#include <vector>

using ll = long long;

using namespace std;

int calculate(vector<int> &a)
{
    int sum = 0;
    for (int i = 2; i <= a.size(); i++)
    {
        sum += abs(a[i-2] - a[i - 1]);
    }
    return sum;
}

int main()
{

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int ans = 0;

    do
    {
        int temp = calculate(a);
        ans = max(ans, temp);
    } while (next_permutation(a.begin(), a.end()));

    cout << ans;

    return 0;
}