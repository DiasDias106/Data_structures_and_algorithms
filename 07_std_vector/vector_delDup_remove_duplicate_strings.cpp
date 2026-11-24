/* 5. Eliminar duplicados
Escreva a função delDup()que:
recebe um vetor de strings
devolve um novo vetor com apenas as strings únicas (sem as strings duplicadas)
Faça a função main() que permite testar a sua*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Para a função find

using namespace std;

vector<string> delDup(const vector<string>& vec) {
    vector<string> result;

    for (const auto& str : vec) {
        // Verifica se a string já está no vetor resultante
        if (find(result.begin(), result.end(), str) == result.end()) {
            result.push_back(str);
        }
    }

    return result;
}

void printVector(const vector<string>& vec) {
    for (const auto& str : vec) {
        cout << str << " ";
    }
    cout << endl;
}

int main() {
    vector<string> myV1;
    int n;
    cout << "Quantas strings deseja inserir? ";
    cin >> n;
    cin.ignore();  // Ignorar o caractere de nova linha após o número

    cout << "Insira as strings:" << endl;
    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s);
        myV1.push_back(s);
    }

    cout << "Vetor original: ";
    printVector(myV1);

    // Chama a função delDup
    vector<string> uniqueV1 = delDup(myV1);

    cout << "Vetor sem duplicados: ";
    printVector(uniqueV1);

    return 0;
}
