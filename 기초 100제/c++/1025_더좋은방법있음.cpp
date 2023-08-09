#include<iostream>
int main(){
    int ninput;
    std::cin>>ninput;
    std::cout<<"["<<ninput/10000*10000<<"]"<<std::endl;
    std::cout<<"["<<ninput%10000/1000*1000<<"]"<<std::endl;
    std::cout<<"["<<ninput%10000%1000/100*100<<"]"<<std::endl;
    std::cout<<"["<<ninput%10000%1000%100/10*10<<"]"<<std::endl;
    std::cout<<"["<<ninput%10000%1000%100%10<<"]";
}

// GPT가 제안하는 더 좋은 코드

/*
#include <iostream>
#include <cmath>

int main() {
    int ninput;
    std::cin >> ninput;

    int divisor = 1;
    while (ninput >= 10) {
        divisor *= 10;
        ninput /= 10;
    }

    while (divisor > 0) {
        int digit = ninput / divisor;
        std::cout << "[" << digit * divisor << "] ";
        ninput %= divisor;
        divisor /= 10;
    }

    return 0;
}
*/