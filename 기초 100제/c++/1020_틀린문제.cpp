#include<iostream>
#include<iomanip>
int main(){
    int f,b;
    char hi;

    std::cin>>f>>hi>>b;
    std::cout<<std::setw(6)<<std::setfill('0')<<f
             <<std::setw(6)<<std::setfill('0')<<b;

}