#include<iostream>
#include<iomanip>

int main(){
    std::cout<<std::setfill('*')<<std::setw(10)<<"123"<<std::endl;
    std::cout<<std::setfill('0')<<std::setw(15)<<"Awesh"<<std::endl;
    std::cout<<std::left<<std::setfill('0')<<std::setw(15)<<"Awesh"<<std::endl;
}