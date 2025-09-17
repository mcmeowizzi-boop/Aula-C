#include <iostream>
using namespace std;

int main(){

    int n,i;
    bool primo = true;

    cout << "Coloque o numero para ver se eh primo ou nao: ";
    cin >> n;

    if(n<=1){
        primo = false;
    }else {
        for(i = 2; i<= n/2; i++){
            if (n%i==0) {
                primo = false;
                break;
            }
        }
    }

    if(primo){
        cout << "O numero " << n << " eh primo";
    }else {
        cout << "O numero " << n << " não eh primo";
    }



    return 0;
}