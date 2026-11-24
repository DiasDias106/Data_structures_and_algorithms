#include<iostream>
#include<string>
using namespace std;
struct el{
    string nome;
    int idade;
    el *next;
};
el *phead = nullptr;

void getData(el*elemento){
    cout << "Dados Pessoais" << endl;
    cout << "Nome:";cin.ignore();getline(cin, elemento->nome);
    cout << "Idade:";cin>> elemento->idade;
}

void putData(el *elemento){
    cout << "Dados Pessoais" <<endl;
    cout << "Nome:\t" << elemento->nome << endl;
    cout << "Idade:\t" << elemento->idade << endl; 
}

bool insHead(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = phead;
    phead = pnovo;
    return true;
}

bool delHead(){
    el *pdel = phead;
    if(!phead) return false;
    phead->next = phead;
    delete pdel;
    return true;
}

void list(){
    el *paux = phead;
    if(!phead) cout << "lista vazia" << endl;
    while(paux){
        putData(paux);
        paux = paux->next;
    }
}

void revlist(){
 el *pListed = nullptr; // último elemento listado
    el *pAux; // para percorrer a lista

    if( !phead ){
        cout << "A pilha está vazia!\n";
        return;
    }

    while( pListed != phead ){ // enquanto o elemento listado não foi o 1º

        // avançar pAux até ao último elemento não listado
        pAux = phead;
        while( pAux->next != pListed ) pAux = pAux->next;

        //listar elemento
        putData( pAux );
        pListed = pAux;
    }
}



el *getPtrToPos( size_t pos ){
    el *pAux = phead;

    // lista tem de ter elementos e o menor valor possível é pos=1
    if( !phead || pos==0 ) return nullptr;

    for(size_t i=1; i<pos; i++){
        pAux = pAux->next;
        if( !pAux ) return nullptr; // pos demasiado grande
    }
    
    return pAux;
}

bool insHere(el* pHere) {
    el* pNovo;

    if (!pHere) return false; // No place to insert

    pNovo = new (nothrow) el; // Allocate space

    if (!pNovo) return false; // Unable to allocate space

    // Fill new element data
    getData(pNovo);

    // Insert the element
    pNovo->next = pHere->next;
    pHere->next = pNovo;
    return true;
}

bool insAtPos(size_t pos) {
    if (pos == 1) return insHead();

    el* pHere = getPtrToPos(pos - 1);
    if (!pHere) return false;

    return insHere(pHere);
}

bool delHere(el* pPrev) {
    if (!pPrev || !pPrev->next) return false; // No place to delete

    el* pDel = pPrev->next;
    pPrev->next = pDel->next;
    delete pDel;
    return true;
}

bool delAtPos(size_t pos) {
    if (pos == 1) return delHead();

    el* pPrev = getPtrToPos(pos - 1);
    if (!pPrev) return false;

    return delHere(pPrev);
}
int main() {
    // Test the functions
    insHead();
    insHead();
    list();
    cout << "After deleting head:" << endl;
    delHead();
    list();
    cout << "After inserting at position 2:" << endl;
    insAtPos(2);
    list();
    cout << "After deleting at position 2:" << endl;
    delAtPos(2);
    list();
    return 0;
}

