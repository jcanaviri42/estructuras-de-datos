#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {4, 2, 5, 3, 5, 8, 3};
    sort(v.begin(), v.end());

    for (auto item : v)
        cout << item << " ";

    vector<pair<int, int>> v2;
    v2.push_back({1, 5});
    v2.push_back({2, 3});
    v2.push_back({1, 2});
    sort(v2.begin(), v2.end());

    cout << "\n";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i].first << " -> " << v2[i].second << ", ";

    vector<tuple<int, int, int>> v3;
    v3.push_back({2, 1, 4});
    v3.push_back({1, 5, 3});
    v3.push_back({2, 1, 3});
    sort(v3.begin(), v3.end());

    cout << "\n";
    for (auto &tuple : v3)
    {
        cout << "(" << get<0>(tuple) << ", " << get<1>(tuple) << ", " << get<2>(tuple) << "), ";
    }

    return 42;
}
