// pair sum
#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 3, 5, 7, 2};
    int n = 5;
    int sum;
    cout << "Enter the sum of number you want to find : ";
    cin >> sum;
    cout << "paired all element"<<endl;
    for (int i = 0; i < 5; i++)
    {
        
        for (int j = i + 1; j < 5; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << ")";
        }
    }

    cout << endl;
     

    
    for (int i = 0; i < 5; i++)
    {
        int element =arr[i];
        for (int j = i + 1; j < 5; j++)
        {
            int element1=arr[j];
            if (element+element1 == sum){
                cout << "Pair FOund " << element <<"," << element1<< endl;
            }
            
    }
    return 0;
    }
}