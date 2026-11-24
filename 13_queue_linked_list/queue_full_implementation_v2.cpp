#include<iostream>
#include<string>
using namespace std;
struct el{
    string nome;
    int idade;
    el * Next;
};
el * Phead=nullptr;
el * pTail=nullptr;
 
void getData(el * elemento){
    cout << "Dados pessoais";
    cout << "Nome:"; cin.ignore();getline(cin,elemento->nome);
    cout << "idade:"; cin>> elemento->idade;
}
void putData(el * elemento){
    cout << "Nome:" << elemento->nome << endl;
    cout << "idade:" << elemento->idade << endl;
}
bool instail(){
    el * pnovo = new(nothrow) el;
    if(!pnovo)return false;
    getData(pnovo);
    pnovo->Next = nullptr;
    if(!Phead){
        Phead = pnovo;
    }else{
        pTail->Next = pnovo;
        pTail = pnovo;
    }
}
bool delHead(){
    el * pdel = Phead;
    if(!Phead) return false;
    if(Phead == pTail) pTail = nullptr;
    Phead = Phead->Next;
    delete pdel;
    return true;
}
void list(){
    el* paux = Phead;
    if(!Phead) cout << "lista vazia" << endl;
    while(paux){
        putData(paux);
        paux = paux->Next;
    }
}
void reverselist(){
    el * plisted = nullptr;
    el * paux = pTail;
    if(!Phead) {
        cout << "lista vazia" << endl;
    }
    do{
        putData(paux);
        plisted = paux;
         paux = Phead;
        while( paux->Next && (paux->Next != plisted) ) paux = paux->Next;

    }while( plisted != Phead ); // repete enquanto o elemento listado não foi o 1º
    }
    int main(){
    int tot;

    cout << "Total de pessoas a inserir = ";
    cin >> tot;

    // inserir pessoas
    for(int i=0; i<tot; i++) 
        if( !instail() ) break;

    // listar
    cout << "\nListagem da fila\n"
         << "================\n";
    list();

    // remover pessoa da cabeça
    cout << "\nApagar à cabeça...\n"
         << "==================\n";
    if( delHead() ){
        cout << "Apaguei.\n";
        list();
    } else
        cout << "Lista vazia\n";

    // listar por ordem inversa
    cout << "\nListagem invertida da fila\n"
         << "==========================\n";
    reverselist();

    return 0;
}


    
