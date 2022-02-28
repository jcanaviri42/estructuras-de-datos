#include <bits/stdc++.h>
using namespace std;

void bitsetStructure() {
    // A bitset is an array whose each value is either 0 or 1
    bitset<10> s;
    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;
    cout << s[4] << "\n"; // 1
    cout << s[5] << "\n"; // 0

    bitset<10> s2(string("0010011010")); // from right to left
    cout << s2[4] << "\n";  // 1
    cout << s2[5] << "\n";  // 0

    // The function count returns the number of ones in the bitset
    cout << "The number of 1's is: " << s2.count() << "\n";

    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
    cout << (a&b) << "\n"; // 0010010000
    cout << (a|b) << "\n"; // 1011111110
    cout << (a^b) << "\n"; // 1001101110
}


void dequeStructure() {
    deque<int> d;
    d.push_back(5);   // [5]
    d.push_back(2);   // [5, 2]
    d.push_front(3);  // [3, 5, 2]
    d.pop_back();     // [3, 5]
    d.pop_front();    // [5]
}

void stackStructure() {
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(5);

    cout << s.top();  // 5
    s.pop();
    cout << s.top();  // 2
}

void queueStructure() {
    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(5);
    cout << q.front(); // 3
    q.pop();
    cout << q.front(); // 2
}

void priorityQueueStructure() {
    priority_queue<int> q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);
    cout << q.top() << "\n"; // 7
    q.pop();
    cout << q.top() << "\n"; // 5
    q.pop();
    q.push(6);
    cout << q.top() << "\n"; // 6
}

int main() {
    // bitsetStructure();
    // dequeStructure();
    // stackStructure();
    priorityQueueStructure();

    return 42;
}
