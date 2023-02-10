//  Reverse an Integer

#include <iostream>
using namespace std;

int reverseInteger(int num)
{
    int sum = 0;
    while (num != 0)
    {
        int rem = num % 10;
        sum = sum * 10 + rem;
        num = num / 10;
        
    }
  return sum;
}

int main()
{
    int num;
    cout << "Enter the value of num : ";
    cin >> num;

    int result = reverseInteger(num);
    cout <<"Reverse the integer : "<< result;
}

// output
// Enter the value of num : 1546
// Reverse the integer : 6451