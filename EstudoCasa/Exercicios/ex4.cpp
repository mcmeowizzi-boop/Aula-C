#include <iostream>

using namespace std;

int fatorial(int n){
    int fat = 1;
    for(int i = 1; i <= n; i++){
        fat *= i;
    }
    return fat;
}

int main(){
    int x;
    cout << "Descubra o fatorial de: \n";
    cin >> x;

    cout << "O fatorial de " << x << " eh " << fatorial(x);
    return 0;
}