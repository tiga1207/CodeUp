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
// ���ڿ��� ����� �� '\0'�� ����ִٴ� ��
    for(int i=0;i<21;i++){
        if(s[i]=='\0'){
            break;
        }else{
        std::cout<<"\'"<<s[i]<<"\'"<<std::endl;
        }

    }
}