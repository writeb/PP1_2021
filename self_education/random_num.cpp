/*
#include <cstdlib>
rand() - function
Ex.:
    int number = rand() % 10        - it returns a random number from 0-9
    however it will return one random number every time

    We need to get a different random number for each execution, to do so, we need 
    add this line of code before declaration of number:
        srand(time(NULL));
*/

/*int rand(int a, int b){
    return rand() % (b + 1 - a) + a;            // a - нижняя граница, b - верхняя граница
}*/