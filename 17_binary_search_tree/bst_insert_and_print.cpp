#include<iostream>
using namespace std;
struct no{
    int val;
    no *esq;
    no *dir;
};

void criarno(no *&raiz,int val){
    no *novoNo = new (nothrow) no();
     if( novoNo ){
        novoNo->val = val;
        // Não são necessárias, pois o nó foi criado com ()
        // que inicia todos os valores com ZERO e os pointers com nullptr
        //novoNo->esq = nullptr;
        //novoNo->dir = nullptr;
        raiz = novoNo;
    }
}
void insNo( no *&raiz, int val ){

    if( !raiz ){ // criar novo
        criarno( raiz, val );
    }else if( val < raiz->val ) // vai para a esquerda
        insNo( raiz->esq, val );
    else if( val > raiz->val ) // vai para a direita
        insNo( raiz->dir, val );
    // se o valor for igual a um existente, não faz nada
}

// Listar a árvore
void listTree( no *raiz ){
    if( !raiz ) return;
    listTree( raiz->esq );
    cout << raiz->val << ' ';
    listTree( raiz->dir );
}


int main(){
    no *raiz = nullptr;

    insNo( raiz, 7 );
    insNo( raiz, 7 );
/*    insNo( raiz, 8 );
    insNo( raiz, 9 );
    insNo( raiz, 6 );*/

    return 0;
}