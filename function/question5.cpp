// check the number is prime or not

#include <iostream>
using namespace std;

void primeOrNot(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "It is prime ";
    }
    else
    {
        cout << "It is not prime";
    }
}

int main()
{
    int num;
    cout << "Enter the values of num : ";
    cin >> num;

    primeOrNot(num);
}


// output
// Enter the values of num : 15
// It is not prime

// Enter the values of num : 7
// It is prime 