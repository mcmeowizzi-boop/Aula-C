#include <iostream>
using namespace std;

int main(){

    int x;

    cout << "Qual numero queres ver a tabuada? \n";
    cin >> x;

    for(int i = 1; i <= 10; i++){
        cout << i << "x" << x << "=";
        cout << i*x<<"\n";
    }

    return 0;
}