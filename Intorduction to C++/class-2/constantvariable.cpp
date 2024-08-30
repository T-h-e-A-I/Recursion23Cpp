#include<iostream>

int main(){
    const double pi{3.14156};
    std::cout<<"The value of pi is: "<<pi<<std::endl;
   // pi = 500; //cannot assign as pi is a constant type variable
   //const double ai; //cannot be uninitialised
}