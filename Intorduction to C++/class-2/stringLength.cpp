#include<iostream>
#include<string>

int main(){
    std::string name;
    std::cout<<"Enter your name: ";
    std::cin>>name;
    std::cout<<"The name consists of "<<name.length()<<" characters!"<<std::endl;
}