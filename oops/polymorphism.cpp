
//  function over loading
// #include<iostream>
// using namespace std;

// class Maths{
//     public:
    
//     int sum(int a , int b){
//         return a+b;
//     }

//     int sum(int a , int b, int c){
//         return a+b+c;
//     }

//     int sum(int a , float b){
//         return a+b+10;
//     }
// };


// int main(){
//     Maths obj;

//     cout<<obj.sum(2,5,1.2f);
//     return 0;
// }

//  operator overloading

// #include<iostream>
// using namespace std;

// class Param{
//     public :
//     int val;

//     void operator+(Param& obj2){
//  int value1= this->val;
//  int value2=object2.val;
//  cout<<(value2-value1)<<endl;
//     }
// };

// int main(){
//     Param object1 , object2;

//    object1.val =7;
//     object2.val =2;
//     // this should pringt the difference between then
//   object1+ object2;
//     return 0
// }



// Runtime Polymorphism

//  function overriding

#include<iostream>
using namespace std;


class Animal{
  public:
  void speak(){
    cout<<"Speaking"<<endl;
  }
};

class Dog:public Animal{
  public:
  // override
  void speak(){
    cout<<"bakrking"<<endl;
  }
};

int main(){
Animal a;
a.speak();

Dog d1;
d1.speak();
}