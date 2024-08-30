#include<iostream>
#include<iomanip>
#include<string>

int main(){
    int age;
    std::string name;
    std::cout<<"Enter your age: ";
    std::cin>>age;
    std::cout<<"Enter your name: ";
    std::getline(std::cin>>std::ws,name); //Solution std::ws
    std::cout<<"My name is: "<<name<<std::endl;
}