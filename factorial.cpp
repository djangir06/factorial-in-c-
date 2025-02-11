#include <iostream>
using namespace std;

int factorial(int);
int main()
{
    int n;
    int result;
    cout << "Enter the number for factorial: ";
    cin >> n;
    result = factorial(n);
    cout << "The factorial of " << n << " is " << result;
}
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {

        fact = fact * i;
    }
    return fact;
}