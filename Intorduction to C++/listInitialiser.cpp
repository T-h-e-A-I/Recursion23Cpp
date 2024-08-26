#include<iostream>
int main(){
    int x{5}; // this line basically mean x = 5;
    double pi{3.1415};
    char intialLetter{'a'};

    int arr[3]{1,2,3};

    std::cout << "The value of x is: "<<x<<std::endl;
    std::cout << "The value of pi is: "<<pi<<std::endl;
    std::cout<< "The initial letter is: "<<intialLetter<<std::endl;
    
    for(int i = 0; i < 3;i++){
        std::cout<<"The "<< i+1 << "th variable is: " << arr[i] << std::endl;
    }

    return 0;
}