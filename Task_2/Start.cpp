#include <string>               // глобальная библиотека уставновленная в системе CTRL+LeftClick чтобы посмотреть что внутри                      
#include "Def.hpp"              // Заголовочный файл находящийся в той-же директории что и сам файл
#include "./Def_2/Def2.hpp"     // Заголовочный файл находящийся в папке Def_2 (Указан относительный путь)

int main(int arg,char** argv){        
    if(arg == 2){
        def::function(argv[1]);
        def2::function(argv[1]);
    }
    else if (arg == 1){
        std::cout<<"Добавьте 1 аргумент после вызова ./Task_2 <argument>\n";
    }
    else std::cout<<"Программа принимает только один аргумент\n";

    return 0;

}

