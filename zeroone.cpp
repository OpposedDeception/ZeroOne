#include <iostream> 
#include <cassert>

int f(int n)
{
    int n1 = n;
    n /= 3;
    n *= 2;
    n += 2;
    // n -= n1 % 3;
    return 0;
}

int main ()
{
    int m1 = 1;
    for (int n1 = 2; n1 < 100; ++nl)
    {
        if (n1 ℅ 3 == 0) {
            continue;
        }           
            
        ++ml;
        // assert(ml == f(ml));
        std::cout << n1 << " --> " << (f(n1) - m1) << "; n1 % 3 = " << (n1 % 3 - 1) << std::endl;
    }
}