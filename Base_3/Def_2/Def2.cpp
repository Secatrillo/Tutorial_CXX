#include "Def2.hpp" // внутри Def2.hpp уже "включен" iostream поэтому добавлять его ещё раз не нужно

void def2::function(char * text){
    for(int i = strlen(text); i >= 0;i--){ //обратное направление
        std::cout<<text[i];
    }
    std::cout<<"\n";
}