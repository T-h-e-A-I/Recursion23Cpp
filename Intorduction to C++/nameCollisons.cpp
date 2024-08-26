#include<iostream>
void myFunc(int x){
    std::cout<< x << std::endl;
}
void myFunc(int x){
    std::cout<< 2*x << std::endl;
}
int main(){
    myFunc(10);
}