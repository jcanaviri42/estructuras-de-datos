// STL (Standar Template Library) 
// is a set of templates used to make the code simple and easy to write.
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a = 5, b = 8, maximum;

    maximum = max(a, b);
    cout << maximum << endl;

    swap(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 42;
}

