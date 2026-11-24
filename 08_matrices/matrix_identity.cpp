#include <iostream>
#include <vector>

using namespace std;

// Função para calcular a matriz identidade de ordem n
vector<vector<int>> calcularMatrizIdentidade(int n) {
    // Criando a matriz identidade
    vector<vector<int>> identidade(n, vector<int>(n, 0));

    // Preenchendo a diagonal principal com uns
    for (int i = 0; i < n; i++) {
        identidade[i][i] = 1;
    }

    return identidade;
}

// Função para imprimir uma matriz
void imprimirMatriz(const vector<vector<int>>& matriz) {
    for (const auto& linha : matriz) {
        for (int elemento : linha) {
            cout << elemento << " ";
        }
        cout << endl;
    }
}

int main() {
    // Definindo a ordem da matriz identidade
    int ordem;
    cout << "Digite a ordem da matriz identidade: ";
    cin >> ordem;

    // Calculando a matriz identidade
    vector<vector<int>> identidade = calcularMatrizIdentidade(ordem);

    // Imprimindo a matriz identidade
    cout << "Matriz Identidade de ordem " << ordem << ":" << endl;
    imprimirMatriz(identidade);

    return 0;
}