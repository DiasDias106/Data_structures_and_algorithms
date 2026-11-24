#include <iostream>
#include <vector>

using namespace std;

// Função para calcular a transposta de uma matriz de vetores
vector<vector<int>> calcularTransposta(const vector<vector<int>>& matriz) {
    // Calculando as dimensões da matriz transposta
    size_t linhas = matriz.size();
    size_t colunas = matriz[0].size();

    // Criando a matriz transposta
    vector<vector<int>> transposta(colunas, vector<int>(linhas));

    // Preenchendo a matriz transposta com os elementos da matriz original
    for (size_t i = 0; i < linhas; i++) {
        for (size_t j = 0; j < colunas; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    return transposta;
}

int main() {
    // Definindo uma matriz de vetores inicial
    vector<vector<int>> myV1(5, vector<int>(3));

    // Lendo os valores para a matriz myV1
    cout << "Introduza 15 numeros:" << endl;
    for (size_t i = 0; i < 5; i++) {
        for (size_t j = 0; j < 3; j++) {
            cin >> myV1[i][j];
        }
    }

    // Calculando a transposta
    vector<vector<int>> transposta = calcularTransposta(myV1);

    // Imprimindo a matriz transposta
    cout << "Matriz Transposta:" << endl;
    for (size_t i = 0; i < transposta.size(); i++) {
        for (size_t j = 0; j < transposta[i].size(); j++) {
            cout << transposta[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
