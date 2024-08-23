#include <bits/stdc++.h> // Esta forma nos permite importar muchas librerias a la vez
using namespace std;

// Typedef acorta la forma de definir typos, por ejemplo ahora no tenemos que escribir:
// - "long long variable" sino mas bien "ll variable"
// Old way
typedef long long ll;

// Modern way
using ull = unsigned long long;

typedef vector<int> vi;    // vector de enteros
typedef pair<int, int> pi; // pair de enteros

// Macros
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) (a) * (a) // Los parentesis previenen errores

int main(void)
{
    // ll - long long - Old way
    ll a = 123456789;
    ll b = 987654321;

    cout << "Multiplication of long long:" << endl;
    cout << a * b << "\n";
 
    // ull - unsigned long long - Modern way
    ull c = 123456789;
    ull d = 987654321;

    cout << "Multiplication of unsigned long long:" << endl;
    cout << c * d << "\n";

    // Basicamente un for hecho con macros
    cout << "REP(i, 1, 3):" << endl;
    REP(i, 1, 3)
    {
        cout << i << "\n";
    }

    cout << "The square root of 9 is: " << SQ(6 + 3);

    return 42;
}
