/*Given a natural number n, let s(n) be the sum of the digits of n. In this
exercise, we say that n is a perfect prime if the infinite sequence n, s(n),
s(s(n)), …only contains prime numbers. For instance, 977 is a perfect prime,
because 977, 9 + 7 + 7 = 23, 2 + 3 = 5, 5, …, are all prime numbers.

Write a recursive function that tells if a natural number n is a perfect prime
or not.

Interface

C++
     bool is_perfect_prime(int n);
C
     int is_perfect_prime(int n);
Java
     public static boolean isPerfectPrime(int n);
Python
     is_perfect_prime(n)  # returns bool

     is_perfect_prime(n: int) -> bool
Precondition

We have n ≥ 0.

Observation You only need to submit the required procedure; your main program
will be ignored.*/

// INCLUDES
#include <iostream>
using namespace std;

// FUNCIONS
bool es_primer(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int suma_digits(int n)
{
    int suma = n % 10;
    if (n > 9) {
        suma += suma_digits(n / 10);
    }
    return suma;
}

/**********************************************************
 * name: is_perfect_prime
 * purpose: detects if a number is a perfect prime
 * arguments: n: the number to evaluate
 * return: true if it is a perfect prime, false otherwise
 **********************************************************/
bool is_perfect_prime(int n)
{
    if (es_primer(n)) {
        while (n > 9) {
            n = suma_digits(n);
            return is_perfect_prime(n);
        }
        return true;
    }
    return false;
}

// COS PRINCIPAL
int main()
{
    int n;
    cin >> n;
    cout << is_perfect_prime(n) << endl;
}
