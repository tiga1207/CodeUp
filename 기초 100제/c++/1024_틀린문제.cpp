// #include<iostream>
// #include<string>

// int main(){
//     std::string str;
//     std::getline(std::cin,str);

//     for(int i=0;i<=str.length();++i)
//         std::cout<<str[i]<<std::endl;

//     return 0;
// }



#include<iostream>
int main(){
    char s[21];
    std::cin.getline(s,21);
// 문자열이 빈것은 각 '\0'이 들어있다는 것
    for(int i=0;i<21;i++){
        if(s[i]=='\0'){
            break;
        }else{
        std::cout<<"\'"<<s[i]<<"\'"<<std::endl;
        }

    }
}