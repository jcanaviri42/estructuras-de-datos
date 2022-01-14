#include <bits/stdc++.h>  // esta forma nos permite importar muchas librerias a la vez
using namespace std;

// Typedef acorta la forma de definir typos
// por ejemplo ahora no tenemos que escribir:
// - long long variable
// sino mas bien
// - ll
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

// Macros
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define SQ(a) (a)*(a) // Los parentesis previenen errores

int main() {
    ll a = 123456789;
    ll b = 987654321;

    cout << a * b << "\n";
    
    REP(i, 1, 3) {
        cout << i << "\n";
    }

    cout << "The square root of 9 is: " << SQ(6+3); 

    return 42;
}
