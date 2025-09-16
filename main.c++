

#include <iostream>

using namespace std;

int main() {

    int matriz[4][4];

    cout << "Digite 4 numeros para o array";

    for(int i = 0; i < 4; i++){
        for (int j = 0; j<4; j++) {
            cout << "Elemento ["<< i <<"]["<< j <<"]";
            cin >> matriz[i][j];
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
                cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
