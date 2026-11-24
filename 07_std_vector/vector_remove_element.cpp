/* 4. Remoção
Escreva a função removeX()que:
recebe um vetor e um inteiro como parâmetros
remove do vector todos os elementos iguais ao valor
devolve verdadeiro se fez alguma remoção, ou falso caso contrário
Faça a função main() que permite testar a sua*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool remocao(vector<int>& v) {
    bool remov = false;
    int num;
    cout << "Introduza um numero para ser removido: ";
    cin >> num;

    // Remove o elemento do vetor
    auto new_end = remove(v.begin(), v.end(), num);

    // Verifica se algum elemento foi removido
    if (new_end != v.end()) {
        v.erase(new_end, v.end());
        remov = true;
    }

    return remov;
}

void printVector(const vector<int>& v) {
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> myV1(5);
    cout << "Escreva 5 elementos:" << endl;
    for (size_t i = 0; i < 5; i++) {
        cin >> myV1[i];
    }

    cout << "Vetor original: ";
    printVector(myV1);

    bool removed = remocao(myV1);

    if (removed) {
        cout << "Elemento removido com sucesso." << endl;
    } else {
        cout << "Nenhum elemento igual foi encontrado." << endl;
    }

    cout << "Vetor após remoção: ";
    printVector(myV1);

    return 0;
}
