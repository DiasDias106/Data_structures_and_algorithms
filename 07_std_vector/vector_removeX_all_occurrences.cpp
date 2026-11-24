/*Escreva a função removeX()que:
recebe um vetor e um inteiro como parâmetros
remove do vector todos os elementos iguais ao valor
devolve verdadeiro se fez alguma remoção, ou falso caso contrário
Faça a função main() que permite testar a sua*/

#include<iostream>
#include<vector>
using namespace std;

bool removeX(vector<int> &v, int num) {
    bool removed = false;
    auto it = v.begin();
    while (it != v.end()) {
        if (*it == num) {
            it = v.erase(it);
            removed = true;
        } else {
            ++it;
        }
    }
    return removed;
}

int main() {
    int num;
    vector<int> myV;
    cout << "Introduza um valor: ";
    cin >> num;
    cout << "Introduza 5 valores para o contentor: " << endl;
    for (size_t i = 0; i < 5; ++i) {
        int valor;
        cin >> valor;
        myV.push_back(valor);
    }
    
    bool result = removeX(myV, num);
    
    if (result) {
        cout << "Elementos apos a remocao: ";
        for (int El : myV) {
            cout << El << " ";
        }
        cout << endl;
    } else {
        cout << "Nenhum elemento foi removido." << endl;
    }

    return 0;
}
