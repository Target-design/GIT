#include <iostream>
using namespace std;

int return_sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 10;
    int b = 20;
    cout << "The sum is " << return_sum(a, b);
}