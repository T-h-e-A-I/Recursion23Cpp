#include<iostream>
#include<iomanip>

int main(){
    double price[3];
    char items[3][20];
    for(int i = 0;i < 3;i++){
        std::cin>>items[i];
        std::cin>>price[i];
    }
    std::cout<<std::setw(20)<<std::left<<"Items";
    std::cout<<std::setw(7)<<"|Price"<<std::endl;
    std::cout<<"____________________|_______"<<std::endl;
    for(int i = 0;i < 3;i++){
        std::cout<<std::setw(20)<<std::left<<items[i];
        std::cout<<"|$"<<std::setw(6)<<std::fixed<<std::setprecision(2)<<price[i]<<std::endl;
    }
}