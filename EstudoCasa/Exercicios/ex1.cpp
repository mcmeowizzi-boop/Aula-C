#include <cstdio>
#include <iostream>

int main(){

    int x;

    std::cout << "Verificacao se numero eh impar ou par: ";
    std::cin >> x;

    int verificacao = x%2;

    if(verificacao == 0){
        std::cout << "Par";
    }
    else {
        std::cout << "impar";
    }

    return 0;
}