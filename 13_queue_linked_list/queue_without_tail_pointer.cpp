#include <iostream>
#include <string>
using namespace std;

struct el {
    string nome;
    int idade;
    el* next;
};

el* phead = nullptr;

void getData(el* elemento) {
    cout << "Dados Pessoais" << endl;
    cout << "Nome: ";
    cin.ignore();
    getline(cin, elemento->nome);
    cout << "Idade: ";
    cin >> elemento->idade;
}

void putData(el* elemento) {
    cout << "Dados Pessoais" << endl;
    cout << "Nome: " << elemento->nome << endl;
    cout << "Idade: " << elemento->idade << endl;
}

bool insTail() {
    el* pnovo = new (nothrow) el;
    if (!pnovo) return false;
    
    getData(pnovo);
    pnovo->next = nullptr;
    
    if (!phead) {
        phead = pnovo;
    } else {
        el* paux = phead;
        while (paux->next) {
            paux = paux->next;
        }
        paux->next = pnovo;
    }
    
    return true;
}

bool delhead() {
    if (!phead) return false;
    
    el* pdel = phead;
    phead = phead->next;
    delete pdel;
    return true;
}

void list() {
    el* paux = phead;
    if (!paux) {
        cout << "Lista vazia" << endl;
        return;
    }
    cout << "Listando elementos:" << endl;
    while (paux) {
        putData(paux);
        paux = paux->next;
    }
}

void revlist(el* paux) {
    if (!paux) return;
    revlist(paux->next);
    putData(paux);
}

void list1(el* paux) {
    if (!paux) return;
    putData(paux);
    list1(paux->next);
}

int main() {
    int tot;
    cout << "Introduza o número de elementos a adicionar: ";
    cin >> tot;

    for (size_t i = 0; i < tot; i++) {
        insTail();
    }

    // Listar
    list();

    // Listar recursivamente
    cout << "\nListagem recursiva:" << endl;
    list1(phead);

    // Listar reverso
    cout << "\nListagem reversa:" << endl;
    revlist(phead);
    cout << endl;

    // Liberar memória
    while (delhead()) {} // Remove todos os elementos da lista

    return 0;
}
