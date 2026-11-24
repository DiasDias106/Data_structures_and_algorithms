#include <iostream>
#include <string>

using namespace std;

const int NUM_CORREDORES = 22;

struct Piloto {
    int numeroPiloto;
    string marcaMoto;
    int classificacao;
};

// Função para criar e preencher o array de pilotos
void criarArray(Piloto pilotos[]) {
    for (int i = 0; i < NUM_CORREDORES; i++) {
        cout << "Digite o número do piloto " << i + 1 << ": ";
        cin >> pilotos[i].numeroPiloto;

        cout << "Digite a marca da moto do piloto " << i + 1 << ": ";
        cin >> pilotos[i].marcaMoto;

        cout << "Digite a classificação do piloto " << i + 1 << ": ";
        cin >> pilotos[i].classificacao;

        cout << endl;
    }
}


void podium(Piloto pilotos[], int tamanho) {
    cout << "== Pódio: Três primeiros classificados ==" << endl;
    for (int i = 0; i < tamanho; i++) {
        if (pilotos[i].classificacao <= 3) {
            cout << "Piloto #" << pilotos[i].numeroPiloto
                 << " - Marca: " << pilotos[i].marcaMoto
                 << " - Classificação: " << pilotos[i].classificacao << endl;
        }
    }
}

int main() {
    // Criar um array de pilotos com 22 posições
    Piloto pilotos[NUM_CORREDORES];

    // Preencher o array com as informações dos pilotos
    criarArray(pilotos);

    // Exibir os três primeiros classificados
    podium(pilotos, NUM_CORREDORES);

    return 0;
}