#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long int rev = 0;
    while (n != 0)
    {
        int lastDigit = n % 10;
        rev = (rev * 10) + lastDigit;
        if (rev > INT_MAX || rev < INT_MIN)
        {
            return 0;
        }

        n = n / 10;
    }
    cout << rev << endl;
    return 0;
}