// Sum of Two Integers  without using operator

#include <iostream>
using namespace std;

 int getSum(int a, int b) {
        while(b!=0){
       unsigned int z = a&b;
      
       a =a^b;
     
       b = z<<1;
          
       
    }
    return a;
    }

int main() {
 int result = getSum(4,7);
 cout<<result;
  return 0;
}