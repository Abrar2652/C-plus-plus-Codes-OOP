#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n1, n2, num1, num2, rem, gcd, lcm;
    cin >> n1 >> n2;
    num1 = n1;
    num2 =n2;
    while(n2!=0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    lcm = (num1*num2)/gcd;
    cout << gcd <<endl;
    cout << lcm<< endl;
    _getch();
    return 0;
}
