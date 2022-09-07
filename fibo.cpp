// Oscar Saavedra
// CECS 342-07
// Prog 1 - Fibonacci Race
// September 6, 2022
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source besides the professor. I further certify that I typed each and every line of code 
// in this program.

#include <iostream>
#include <chrono>
using namespace std;

// Fibo function
long long int fibo(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    // Get start time
    auto now = chrono::steady_clock::now();
    long long int f;

    // Get fibonacci numbers up to 50
    for (int i = 1; i <= 50; i++){
        // Time before fibonacci function call
        auto before = chrono::steady_clock::now();
        f = fibo(i);
        // Time after fibonacci function call
        auto after = chrono::steady_clock::now();

        // Calculate differnece in times
        auto diff = after - before;
        auto delta = after - now;

        // Print the results
        cout << i << ": " << f;
        cout << "\tTime since last num: " 
             << chrono::duration_cast<chrono::milliseconds>(after - before).count() << " ms";
        cout << "\tTime since start: " 
             << chrono::duration_cast<chrono::milliseconds>(after - now).count() << " ms";
        cout << endl;
    }

    return 0;
}
