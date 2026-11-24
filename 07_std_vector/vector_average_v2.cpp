#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myv1(10); 
    float media = 0;
    int valor;

    cout << "Introduza 10 numeros:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> valor;
        myv1[i] = valor;
        media += valor;
    }

    media /= 10; 

    cout << "Elementos do vetor:" << endl;
    for (auto el : myv1) {
        cout << el << "\t";
    }

    cout << "\nMédia dos números: " << media << endl;

    return 0;
}
