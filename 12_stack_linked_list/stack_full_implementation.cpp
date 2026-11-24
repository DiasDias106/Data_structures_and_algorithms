#include<iostream>
#include<string>
using namespace std;
struct el{
    string nome; //campo de dados
    int idade;//campo de dados
    el *next; // pointer para a proxima posição
};
el *pHead = nullptr;

void getData(el *elemento){
     cout << "\nDados da pessoa"
         << "\n---------------\n";
    cout << " Nome: "; cin.ignore(); getline(cin, elemento->nome); //cin.ignore(); ignora o próximo caractere de entrada (normalmente o \n que ficou no buffer). ,getline(cin, elemento->nome); lê a linha inteira de entrada do usuário e armazena na variável nome do objeto apontado por elemento. 
    cout << "Idade: "; cin >> elemento->idade;
    cout << endl;
}
// Função específica para a estrutura deste exemplo
// Escreve os dados de um elemento da lista 
void putData( el *elemento ){
    cout << "Dados da pessoa\n"
         << "---------------\n";
    cout << " Nome: " << elemento->nome << endl;
    cout << "Idade: " << elemento->idade << endl;
}
bool insHead(){
    el *pNovo = new (nothrow) el; // alocação de espaço

    if( !pNovo ) return false; // impossível inserir

    // preencher dados do novo elemento
    getData( pNovo );

    // inserir o elemento no topo da pilha
    pNovo->next = pHead;
    pHead = pNovo;
    return true;
}
bool delHead(){
    return true;
}


// listar pilha (top->bottom)
void list(){
}


// listar pilha invertida (bottom->top)
void reverseList(){
}


// programa exemplo para testar as funções
int main(){
    int tot;

    cout << "Total de pessoas a inserir = ";
    cin >> tot;

    // inserir pessoas
    for(int i=0; i<tot; i++) 
        if( !insHead() ) break;

    // listar
    /*cout << "\nListagem da pilha\n"
         << "=================\n";
    list();

    // remover pessoa da cabeça
    /*cout << "Apagar à cabeça...\n"
         << "==================\n";
    if( delHead() ){
        cout << "Apaguei.\n";
        list();
    } else
        cout << "Lista vazia\n";

    // listar por ordem inversa
    /*cout << "\nListagem invertida da pilha\n"
         << "===========================\n";
    reverseList();*/

    return 0;
}