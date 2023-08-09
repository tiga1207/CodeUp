#include<iostream>


int main(){
    char str[2001];

    std::cin.getline(str,2001,'\n');
    std::cout<<str;
}