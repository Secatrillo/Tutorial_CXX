#include <iostream>                                         // Директива

using namespace std;                                        // Использование пространства имён

int main(int arg, char** argv){                             // Функция main является основным телом программы, при запуске которой исполняется пошагово 
    // arg - колличество аргументов программы не может быть меньше
    // так как первый аргумент всегда имя самой программы
    // второй и агрумент - пользовательские
    // argv - матрица содержащая символы введёныйх аргументов
    // так argv[1][3] - первый пользовательский аргумент, 4 буква
    if(arg == 1) cout<<"No parameters added, Hello user\n!";// Если одна строка то можно писать без {}
    else{
        for(int i = 0; i < arg; i++){
            if(argv[i][0] == '-'){
                switch (argv[i][1]){  
                    case 'h':
                        cout<<  "This program takes key [-t], and if needed some other argument.\n"<<
                                "There full list of commands and arguments:\n"<<
                                "-h             -Call for help\n"<<
                                "-p <string>    -Prints given string\n"<<
                                "-v             -Prints version\n"<<
                                "-n <Name>      -Says Hello to you!\n";
                        break;
                    case 'v':
                        cout<<"Start\nVersion: 0.0.1\n";
                        break;
                    case 'p':
                        i++;
                        cout<<"There what you asked to print:\n"<<argv[i]<<'\n';
                        break;
                    case 'n':
                        i++;
                        cout<<"Now I know your name:\n"<<argv[i]<<'\n';
                        break;
                    default:
                        break;
                }
            } 
        }

    }
    
    

    

}

