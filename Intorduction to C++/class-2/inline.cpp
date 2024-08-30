#include<iostream>
inline int square(int num){
    return num*num;
}
int main(){
    int num1,num2;
    std::cout<<"Please enter two numbers: ";
    std::cin>>num1>>num2;
    std::cout<<"The square of first number is: "<<square(num1)<<std::endl;
    std::cout<<"The square of first number is: "<<square(num2)<<std::endl;
}