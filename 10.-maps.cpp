#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;

    cout << m["banana"] << "\n"; // 3

    // if the key doesn´t exists map creates a new one
    cout << m["mango"] << "\n"; // 0

    // The function count checks if the key exists in a map
    if (m.count("monkey"))
    {
        // key exists
        cout << "The key exists" << endl;
    }

    cout << "\nPrinting all the elements in the map" << endl;
    // The following code prints all the keys and values in a map
    for (auto x : m)
    {
        cout << x.first << " " << x.second << "\n";
    }

    return 42;
}
