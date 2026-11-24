#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct el{
    string nome;
    int idade;
    el *Next;
};
el * pHead = nullptr;

void getData(el *elemento){
    cout << "nome:";cin.ignore();getline(cin,elemento->nome);
    cout << "idade:";cin >> elemento->idade;
}
void putData(el *elemento){
    cout << "nome:" << elemento->nome << endl;
    cout << "idade:"<< elemento->idade << endl;
}

bool insHead(){
    el *pnovo = new(nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->Next = pHead;
    pHead = pnovo;
    return true;
}


int main(){
   int tot;
   cout << "introduza quantos quer adicionar" <<endl;
   cin >> tot;

   //introduzir a cabeça
   for(size_t i=0;i<tot;i++){
    if( !insHead() ) break;
   }
}
