#include<iostream>
void cout(int x){
    std::cout<< "Hello this is x: "<<x<<std::endl;
}
int main(){
    std::cout<< "Hello world.\n";
    cout(10);
}