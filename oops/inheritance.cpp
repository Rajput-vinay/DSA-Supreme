// #include<iostream>

// using namespace std;

// class Animal{
//     public:
//     int age;
    

//     void eat(){
//         cout<<"Eating "<<endl;
//     }


// };
// class Dog:public Animal{
//     public:
//  void print(){
//     cout<<this->age;
//  }
// };

// int main(){
// Dog d1;
// // cout<<d1.age;
// d1.print();
// return 0;
// }


//  single inheritance

// #include<iostream>
// using namespace std;

//  class Car{
//          public:
//              string name;
//              int  engine;
//              int age;

//              void speedUp(){
//                 cout<<"Speeding Up"<<endl;

//              }

//              void breakMarro(){
//                  cout<<" break maardi"<<endl;
//              } 
//              };

// class Scorpio: public Car{

// };


// int main(){
// Scorpio babbarWali;
// babbarWali.speedUp();
// }



//  multilevel


// #include<iostream>
// using namespace std;

// class Fruit{
//     public:
//     string name;
// };

// class Mango: public Fruit{
//     public: 
//     int weight;
// };
//  class Alphanso:public Mango
// {
//     public:
//     int sugarLevel;
// };
// int main(){
// Alphanso a;
// cout<<a.name<<" "<<a.weight<<" "<<a.sugarLevel<<endl;

// return 0;
// }



// multiplier inheritance

// #include<iostream>
// using namespace std;

// class A{
//     public:
//     int physics;
// };

// class B{
//     public :
//     int chemistry;
// };

// class C: public A, public B
// {
//     public:
//     int math;
// };


// int main(){
//     C obj;
//     cout<<obj.physics<< " "<<obj.chemistry<<" "<<obj.math <<endl;

//     return 0;
// }


//  Hierarchical Inheritance

// #include<iostream>
// using namespace std;
// class Car{
// public:
// int age;
// int weight;

// void speedUp(){
//     cout<<"Speeding Up"<<endl;
// }
// };

// class Scorpiro:public Car{

// };

// class Fortuner:public Car{

// };

// int main(){
//     Scorpiro s11;
//     s11.speedUp();

//     Fortuner f11;
//     f11.speedUp();
//     return 0;
// }


