#include<iostream>
using namespace std;

class Animal{
    // state or Properties
private:
 int weight;

 public:
    int age;
    string type;

//  default constructor

Animal(){
    this->weight =0;
    this->age=0;
    this->type ="";
    cout<<"constructor called"<<endl;
}
//  Parameterised Constructor

Animal(int age){
    this->age = age;
    cout<<" Parametrised Constructor called "<<endl;
}

Animal(int age, int weight){
    this->age = age;
    this->weight = weight;
    cout<<" Parametrised Constructor 2 called "<<endl;
}

Animal(int age, int weight, string type){
    this->age = age;
    this->weight = weight;
    this->type = type;
    cout<<" Parametrised Constructor 3 called "<<endl;
}


//  copy constructor

Animal(Animal &obj){
this->age = obj.age;
this->weight =obj.weight;
this->type = obj.type;
cout<<"I am inside copty constructor"<<endl;
}

    // behavior
    void eat(){
cout<<"Eating"<<endl;
    }

    void sleep(){
cout<<"sleeping"<<endl;
    }

    int getWeight(){
        return weight;
    }

    void setWeight(int weight){
        weight = weight;
    }


void print(){
    cout<<this->age<<" "<<this->weight<<" "<<this->type;
}

~Animal(){
    cout<<"Iam inside the destructor"<<endl;
}

    };

int main(){
//     object Creation

// static
// Animal ramesh; 
// ramesh.age =12;
// ramesh.type= "lion";
// cout<<"Age o;f ramesh is :"<<ramesh.age<<endl;
// cout<<"name of ramesh is: "<<ramesh.type<<endl;  


// ramesh.eat();

// ramesh.sleep();

// //  to private member access 
// ramesh.setWeight(101);
// cout<<"Weight"<<ramesh.getWeight()<<endl;
// Dynamic Memory

// Animal* suresh = new Animal;
// (*suresh).age =15;

// //  alternate - dynamic

// suresh->age=17;

// suresh->eat();
//    suresh->type="billi";

// Animal a();
// Animal* b = new Animal(100 ,500,"ramesh");
// // object copy
//   Animal c = a;
//  Animal animal1(c);
//     return 0;
// }


// Animal a;
// a.age=20;
// a.setWeight(101);
// a.type = "babbar";

// Animal b =a;

// a.print();
// cout<<endl;
// b.print();

// cout<<endl;
// a.type[0]='G';

// a.print();


cout<<"a obj creation"<<endl;
Animal a;

a.age = 5;

cout<<"b obj cration"<<endl;
Animal* b = new Animal();
b->age =12;

//  manually
delete b;
return 0;

}
