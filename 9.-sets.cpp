#include <bits/stdc++.h>
using namespace std;

int main() {
    // A set is a datastructured that contains any kind of element
    // it stores distinct values
    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);

    cout << s.count(3) << "\n"; // 1
    cout << s.count(4) << "\n"; // 0

    s.erase(3);
    s.insert(4);

    cout << s.count(3) << "\n"; // 0
    cout << s.count(4) << "\n"; // 1

    set<int> s2 = {2, 5, 6, 8};
    cout << s2.size() << "\n"; // 4
    for (auto x: s2) {
        cout << x << " ";
    }

    set<int> s3;
    s3.insert(5);
    s3.insert(5);
    s3.insert(5);
    cout << "\n" << s3.count(5); // 1

    multiset<int> s4;
    s4.insert(5);
    s4.insert(5);
    s4.insert(5);
    cout << "\n" << s4.count(5); // 3

    s4.erase((s4.find(5)));
    cout << "\n" << s4.count(5); // 2

    return 42;
}
