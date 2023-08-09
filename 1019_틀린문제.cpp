#include<iostream>
#include<iomanip>

int main(){
    int year,month,day;
    char dot1,dot2;

    std::cin>>year>>dot1>>month>>dot2>>day;
    std::cout<<std::setw(4)<<std::setfill('0')<<year<<dot1
             <<std::setw(2) <<std::setfill('0')<<month<<dot2
             <<std::setw(2) <<std::setfill('0')<<day;

    
    
}