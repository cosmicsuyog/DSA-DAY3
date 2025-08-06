#include <iostream>
#include <climits>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        int num = x;
        long int rev = 0;
        while (num != 0)
        {
            int lastd = num % 10;
            rev = (rev * 10) + lastd;
            if (rev > INT_MAX || rev < INT_MIN)
            {
                return false;
            }

            num = num / 10;
        }
        if (rev == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Solution solution;
    int num;
    cout << "Enter a number to check if it's a palindrome: ";
    cin >> num;

    if (solution.isPalindrome(num))
        cout << num << " is a palindrome!" << endl;
    else
        cout << num << " is not a palindrome!" << endl;

    return 0;
}