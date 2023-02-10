//  print all prime no from one to n;

#include <iostream>
using namespace std;

int rangeOfPrimeNumber(int N)
{
 int count;
    for (int i = 2; i <= N; i++)
    {
         count= 0;

        for (int j = 2; j < i / 2; j++)
        {

            if (i % j == 0)
            {
                count = 1;
                break;
            }
        }

        if (count == 0 && N != 1)
            cout << i << " ";
    }
}

int main()
{
    int num;
    cout << "Enter the value of num : ";
    cin >> num;
    int result = rangeOfPrimeNumber(num);
    cout << result;
}
