#include <iostream>
#include <math.h>
using namespace std;
int bnk(int n)
{
    if (n == 0) return 0;
    else return 1 + bnk(n / 10);
}
int reverse(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) * pow(10,bnk(n)-1)+ reverse(n / 10);
}

int main() 
{
    int n;
    cin >> n;
    cout << reverse(n);  
    return 0;
}