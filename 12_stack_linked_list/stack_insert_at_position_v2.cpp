#include<iostream>
#include<string>
using namespace std;
struct el{
    string nome;
    int idade;
    el *next;
};
 el * pHead =nullptr;
 void getData(el *elemento){
    cout << "Dados pessoais" << endl;
    cout << "nome";cin.ignore();getline(cin,elemento->nome);
    cout << "idade"; cin >> elemento->idade;
 }
 void putData(el *elemento){
    cout << "Dados Pessoais"<< endl;
    cout << "nome:\t" << elemento->nome << endl;
    cout << "idade\t" << elemento->idade << endl; 
 }
 bool instHead(){
    el * pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = pHead;
    pHead = pnovo;
    return true;
 }
 void list(){
    el *pAux = pHead; // para percorrer a lista

    if( !pHead ){
        cout << "A pilha está vazia!\n";
    }
    while(pAux){
        putData( pAux );
        pAux = pAux->next;
    }
}
void reverseList(el *pAux) { //lista reversa , listar de traz para a frente por assim dizer.
    if (pAux == nullptr) return;
    reverseList(pAux->next);
    putData(pAux);
}
bool delHead(){
    el *pDel = pHead;

    if( !pHead ) return false; // se a lista estiver vazia

    pHead = pHead->next;
    delete pDel;
    return true;
}
void addElemento(int posicao) {
    if (posicao < 0) {
        cout << "Posição inválida!\n";
        return;
    }

    el* pnovo = new (nothrow) el;
    if (!pnovo) {
        cout << "nao alocou memoria!\n";
        return;
    }

    getData(pnovo);

    if (posicao == 0) { // caso queiramos adicionar na primeira posição ou seja a cabeça
        pnovo->next = pHead;
        pHead = pnovo;
        return;
    }

    el* pAux = pHead;
    for (int i = 0; i < posicao - 1; ++i) {
        if (!pAux) {
            cout << "Posição inválida!\n";
            delete pnovo;
            return;
        }
        pAux = pAux->next;
    }

    if (!pAux) {
        cout << "Posição inválida!\n";
        delete pnovo;
        return;
    }

    pnovo->next = pAux->next;
    pAux->next = pnovo;
}
int main(){
     int tot;
     int local;
    cout << "Total de pessoas a inserir = ";
    cin >> tot;

    // inserir pessoas
    for(int i=0; i<tot; i++)
        if( !instHead() ) break;

    cout << "\nListagem da pilha\n"
         << "=================\n";
    list();
    //remover pessoa da cabeça
    cout << "Apagar à cabeça...\n"
         << "==================\n";
    if( delHead() ){
        cout << "Apaguei.\n";
        list();
    } else
        cout << "Lista vazia\n";

     // listar por ordem inversa
    cout << "\nListagem invertida da pilha\n"
         << "===========================\n";
    reverseList(pHead);
     

    cout << "introduza a localizacao onde pretende incerir"<<endl;
    cin >> local;
    addElemento(local);
    
    list();
}