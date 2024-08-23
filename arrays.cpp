#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> v;
    v.push_back(3); // [3]
    v.push_back(2); // [3, 2]
    v.push_back(5); // [3, 2, 5]

    cout << v[0] << " ";  // 3
    cout << v[1] << " ";  // 2
    cout << v[2] << "\n"; // 5

    // Ways for iterate in vectors
    cout << "Iteranting with 'for':\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << "\nIterating with 'auto':\n";
    for (auto x : v)
    {
        cout << x << " ";
    }

    vector<int> v2;
    v2.push_back(5); // [5]
    v2.push_back(2); // [5, 2]

    cout << "\nLast item: " << v2.back() << "\n"; // 2
    v2.pop_back();                                // [5]
    cout << "Last item: " << v2.back() << "\n";   // 5

    string a = "hatti";
    string b = a + a;
    cout << b << "\n"; // hattihatti
    b[5] = 'v';
    cout << b << "\n"; // hattivatti
    string c = b.substr(3, 4);
    cout << c << "\n"; // tiva

    return 42;
}
