#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);

    // The following code creates an iterator it that points to the smallest element in a set
    set<int>::iterator it = s.begin();
    // A shorter way to write the code is as follows
    auto it2 = s.begin();
    cout << *it2 << "\n";

    cout << "All the elements in the iterator: ";
    for (auto it3 = s.begin(); it3 !=s.end(); it3++) {
        cout << *it3 << "  ";
    }

    // The following code prints the largest element in the set
    auto it4 = s.end();
    it4--;
    cout << "\nThe largest element in the set is: " << *it4 << "\n";

    // The function find(x) returns an iterator that points to an element whose
    // value is x. However, if the set does not contain x, the iterator will be end.
    auto it5 = s.find(9);
    if (it5 == s.end()) {
        cout << "9 is not in the set" << "\n";
    }

    auto it6 = s.lower_bound(3); // the smallest element 3 or another less than 3
    if (it6 == s.begin()) {
        cout << "Is the first: " << *it6 << "\n";
    } else if (it6 == s.end()) {
        it--;
        cout << "Is the last: " << *it6 << "\n";
    } else {
        int a = *it6;
        it6--;
        int b = *it6;

        if (3 - b < 3 - a) cout << "b = " << b << "\n";
        else cout << "c = " << a << "\n";
    }

    return 42;
}
