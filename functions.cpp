#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    return (n == 0) ? 1 : n * factorial(n - 1);
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int fibonacciBinnetsFormula(int n)
{
    return (pow(1 + sqrt(5), n) - pow(1 - sqrt(5), n)) / (pow(2, n) * sqrt(5));
}

int numberOfDigits(int n)
{
    return log10(n) + 1;
}

int main()
{
    // Functions defined by the language
    cout << "The round of 3 / 2 = " << round(3 / 2) << "\n";
    cout << "The minimun value between 1..3 is: " << min({1, 2, 3}) << "\n";
    cout << "The maximun value between 1..3 is: " << max({1, 2, 3}) << "\n";

    // Our own function called factorial
    cout << "Factorial of 5 = " << factorial(5) << "\n";

    cout << "The first 10 fibonacci numbers:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << fibonacciBinnetsFormula(i) << " -> ";
    }
    cout << "\n22 has " << numberOfDigits(22) << " digits\n";
    cout << "123 has " << numberOfDigits(123) << " digits\n";
    cout << "9982 has " << numberOfDigits(9982) << " digits\n";

    return 42;
}
