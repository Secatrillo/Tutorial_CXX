#include <iostream>                                         // предкомпелиционная команда

using namespace std;                                        // использование пространства имён

int main(int arg, char** argv){                             //функция main является основным телом программы, при запуске которой исполняется пошагово 
    if(arg == 1) cout<<"No parameters added, Hello user\n!";  // если одна строка то можно писать без {}
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

