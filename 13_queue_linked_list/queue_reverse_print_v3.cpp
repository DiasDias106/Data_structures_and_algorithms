#include<iostream>
#include<string>
using namespace std;
struct el{
  string nome;
  int idade;
  el *next;
};
el *phead = nullptr;
el *ptail = nullptr;

void getData(el *elemento){
    cout << "Dados pessoais" << endl;
    cout << "Nome:";cin.ignore();getline(cin,elemento->nome);
    cout << "Idade:";cin >> elemento->idade;
}
void putData(el *elemento){
    cout << "Dados pessoais" << endl;
    cout << "Nome:" << elemento->nome << endl;
    cout << "Idade:" << elemento->idade << endl;
}

bool instail(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = nullptr;
    if(!phead){
        phead = pnovo;
    }else{
        ptail->next = pnovo;
        ptail = pnovo;
    }
}

bool delhead(){
    el *pdel = phead;
    if(!phead) return false;
    if(phead == ptail) ptail = nullptr;
    phead->next = phead;
    delete pdel;
    return true;
}

void list(){
    el *paux = phead;
    if(!phead) cout << "lista vazia" << endl;
    if(phead == ptail) cout << "so existe um elemento" << endl;
    while(paux){
        putData(paux);
        paux = paux->next;
    }
}

void qReverseList(){
    el *plisted = nullptr; // último elemento listado
    el *paux = ptail; // para percorrer a lista

    if( !phead ){
        cout << "A fila está vazia!\n";
        return;
    }

    do{
        //listar elemento
        putData( paux );
        plisted = paux;

        // avançar pAux até ao último elemento não listado
        paux = phead;
        while( paux->next && (paux->next != plisted) ) paux = paux->next;

    }while( plisted != phead ); // repete enquanto o elemento listado não foi o 1º
}

int main(){
    int tot;
    cout << "introduza um numero" << endl;
    cin >> tot;
    for(size_t i=0;i<tot;i++){
        instail();
    }

    list();

    delhead();


}