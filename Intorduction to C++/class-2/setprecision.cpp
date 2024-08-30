#include<iostream>
#include<iomanip>

int main(){
    double pi = 3.14159265358989;
    std::cout<<"Without any manipulator: "<<pi<<std::endl;
    std::cout<<std::setprecision(3)<<"With set precision 3: "<<pi<<std::endl;
    std::cout<<std::setprecision(5)<<"With set precision 5: "<<pi<<std::endl;

    double ai = 111.232211244;
    std::cout<<"Without any manipulator: "<<ai<<std::endl;
    std::cout<<std::setprecision(2)<<"With set precision 2: "<<ai<<std::endl;
    std::cout<<std::setprecision(3)<<"With set precision 3: "<<ai<<std::endl;
    std::cout<<std::setprecision(5)<<"With set precision 5: "<<ai<<std::endl;
}