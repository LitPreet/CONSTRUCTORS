                      // Simple programs of constructors 

  
#include<iostream>
#include<string.h>
using namespace std;

class employee{
    
    char name[45];
    int basic;
    int Hra;

public:

employee() // constructor 
{
    strcpy(name,"ram");
    basic=1000; // initializing value
    Hra=100; // initializing value
    
    
}
void display(){
    cout<<"the name : "<<name<<endl;
    cout<<"the basic pay : "<<basic<<endl;
    cout<<"the Hra : "<<Hra<<endl;
    
}

};
int main(){
    employee obj; // creating object
    obj.display(); // calling function by using object
    
    
}