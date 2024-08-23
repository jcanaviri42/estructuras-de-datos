#include <bits/stdc++.h>
using namespace std;

// Las estructuras nos permiten definir un propio tipo de dato
struct P
{
    int x, y;
    bool operator<(const P &p)
    {
        if (x != p.x)
            return x < p.x;
        else
            return y < p.y;
    }
};

bool comp(string a, string b)
{
    if (a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}

int main(void)
{
    P point1;
    P point2;

    point1.x = 3;
    point1.y = 3;

    point2.x = 1;
    point2.y = 1;

    bool isSmall = point1 < point2;
    string message = isSmall ? "Point 1 is small" : "Point 2 is small";

    cout << message << endl;

    string str1 = "Hello";
    string str2 = "Josue";
    cout << comp(str1, str2);

    return 42;
}
