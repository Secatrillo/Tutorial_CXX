#include <iostream>     // глобальный поиск файла
#include "hello.hpp"    // локальный поиск

int main(){
    std::cout<<func(1,2)<<'\n';
    std::cout<<func(0.1f,0.2f)<<'\n';
}