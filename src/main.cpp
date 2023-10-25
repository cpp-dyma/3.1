#include <iostream>

int main(){
    std::cout << "Hello world!"<<std::endl;

    int abc;
    abc = 5;
    abc = 5+1;
    std::cout << abc << std::endl;

    if(abc > 3){
        std::cout << "abs est plus grand que 3"<<std::endl;
    }

    {
        int xyz = 4;
        std::cout << xyz << std::endl;
    }
}
