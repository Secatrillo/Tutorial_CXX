#include "Def.hpp" // внутри Def.hpp уже "включен" iostream поэтому добавлять его ещё раз не нужно

void def::function(char * text){
    for(int i = 0; i<strlen(text);i++){ //прямое направление
        std::cout<<text[i];
    }
    std::cout<<"\n";
}