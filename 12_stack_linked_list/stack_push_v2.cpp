#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct el
{
    string nome;
    int idade;
    el *Next;
} ;
el *pHead = nullptr;
void getData(el *elemento){
    cout << "dados" << endl;
    cout << "nome:"; cin.ignore();getline(cin,elemento->nome);
    cout << "idade:";cin >> elemento->idade;
}
void putData(el *elemento){
    cout << "nome:\t" << elemento->nome<<endl;
    cout << "idade:\t" << elemento->idade << endl; 
}
bool inshead(){
    el *pnovo = new(nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->Next = pHead;
    pHead = pnovo;
} //incerir na cabeça ou incerir um novo dado

int main(){
    int tot;

    cout << "Total de pessoas a inserir = ";
    cin >> tot;

    // inserir pessoas 
    for(int i=0; i<tot; i++) 
        if( !inshead() ) break;
    return 0;
}