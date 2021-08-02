#include <iostream>
using namespace std;

int multiply_num(int a, int b)
{
    return a * b;
}

int main()
{
    int a = 10;
    int b = 20;
    cout << multiply_num(a, b);
}