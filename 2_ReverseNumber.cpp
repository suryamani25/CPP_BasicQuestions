#include <iostream>
using namespace std;

int main()
{
    int n, rn = 0, remainder;

    cout << "Enter an integer Number: ";
    cin >> n;

    while (n != 0)
    {
        remainder = n % 10;

        rn = rn * 10 + remainder;

        n /= 10; 
    }

    cout << "Reversed Number: " << rn << endl;
    return 0;
}