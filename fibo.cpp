#include <iostream>
#include <chrono>
//#include <unistd.h>
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
    auto now = chrono::steady_clock::now();

    for (int i = 1; i <= 50; i++){
        auto before = chrono::steady_clock::now();
        long long int f = fibo(i);
        auto after = chrono::steady_clock::now();
        auto diff = after - before;
        auto delta = after - now;

        cout << i << ": " << f;
        cout << "\tTime since last num: " << chrono::duration_cast<chrono::milliseconds>(after - before).count() << " ms";
        cout << "\tTime since start: " << chrono::duration_cast<chrono::milliseconds>(after - now).count() << " ms";
        cout << endl;
    }
   
    return 0;
}
