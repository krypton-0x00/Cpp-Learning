#include<iostream>
using namespace std;

class Students{
    public:
    int age;

    //constructor
    Students(int age){
        cout<<"constructor called"<<endl;    
        this->age = 12;
        cout<<age;
            
   }
};
    

 
int main() {
   //static way
   Students s1;
   s1.age = 12;
   

   //dynamic way
   Students* s2 = new Students(); //use () for dynamic
   (*s2).age = 13;
   //or better way
   s2->age=10

}