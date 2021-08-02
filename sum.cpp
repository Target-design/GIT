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
    cout << return_sum(a, b);
}