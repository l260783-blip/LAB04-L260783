#include<iostream>
using namespace std;
int main()
{
    int n, totalD, sum, largest, reversed, digit;
    cout << "Enter a number = ";
    cin >> n;
    totalD = 0, sum = 0, largest = 0, reversed = 0;
    if (n == 0)
    {
        totalD = 1;
        sum = 0;
        largest = 0;
        reversed = 0;
    }
    else if (n < 0)
    {
        n = -n; 
        while (n > 0)
        {
            digit = n % 10;
            sum = sum + digit;
            if (digit > largest)
            {
                largest = digit;
            }
            reversed = (reversed * 10) + digit;
            n = n / 10;
            totalD++;
        }
        reversed = -reversed;
    }
    else
    {
        while (n > 0)
        {
            digit = n % 10;
            sum = sum + digit;
            if (digit > largest)
            {
                largest = digit;
            }
            reversed = (reversed * 10) + digit;
            n = n / 10;
            totalD++;
        }
    }
    cout << "Digits: " << totalD;
    cout << "\nDigit sum : " << sum;
    cout << "\nLargest digit : " << largest;
    cout << "\nReversed : " << reversed << endl;
    return 0;
}