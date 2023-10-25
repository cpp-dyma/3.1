#include <iostream>

int main()
{
    
    int abc;                                                    //Instruction de déclaration
    abc = 5;                                                    //Instruction d'expression
    abc = 5+1;                                                  //Instruction d'expression
    ;                                                           //Instruction nulle
    std::cout << abc << std::endl;                              //Instruction d'expression

    
    if(abc > 3){                                                //Instruction de sélection
        std::cout << "abc est plus grand que 3"<<std::endl;     //Instruction d'expression
    }

    
    {                                                           //Instruction composée
        int xyz = 4;                                            //Instruction de déclaration
        std::cout << xyz << std::endl;                          //Instruction d'expression
    }

    return 0;                                                   //Instruction d'expression
}
