#include <iostream>
#include <math.h>
using namespace std;
// Count the digits of a integer number.
// Đếm chữ số của 1 số nguyên.
// Reason: I need to know how many digits do that number has to use "pow" function.
// Lý do: cần đếm chữ số để dùng hàm "pow".
int bnk(int n)
{
    if (n == 0) return 0;
    else return 1 + bnk(n / 10);
}
// I used "bnk" fuction to count the number of zeros in a number so I took the result of "bnk" function minus 1.
// Tôi dùng hàm "bnk" để tìm bao nhiêu số 0 nên lấy kết quả của hàm "bnk" trừ 1. 
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
