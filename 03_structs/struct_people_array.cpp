#include <iostream>
#include <string.h>
using namespace std;

// Definição da estrutura. Não implica reserva de espaço
// Criar um tipo novo chamado "pes"
struct pes {
	char nome[81];	//campo nome
	int idade;		//campo idade
};

int main(int argc, char** argv) {
	// para fazer um conjunto de pessoas
	pes turma[3]; // array de estruturas
    pes aux;
	
	// ler, usando um ciclo de repetição, os nomes e idades para cada pessoa
	cout << "\n-----------------------" << endl;
	cout << "Dados para as 3 pessoas" << endl;
	cout << "-----------------------" << endl;
	for(size_t i=0;i<3;i++){
        cout << "insira o seu nome" << endl;
        cin.ignore();
        cin.getline(turma[i].nome,81);
        cout << "introduza a sua idade" << endl;
        cin >> turma[i].idade ;
    }
	
	//	Escrever, usando um ciclo de repetição, os nomes e idades para cada pessoa
	cout << "\n-------------------------" << endl;
	cout << "Dados lidos das 3 pessoas" << endl;
	cout << "-------------------------" << endl;
	for(size_t i=0;i<3;i++){
        cout << "nome:\t" << turma[i].nome << endl;
        cout << "idade:\t" << turma[i].idade << endl;
    }
	
	cout << "\n---------------------------" << endl;
	cout << "Listagem por ordem de idade" << endl;
	cout << "---------------------------" << endl;
if( turma[0].idade > turma[1].idade ){
		aux = turma[0];
		turma[0] = turma[1];
		turma[1] = aux;
	}
	// chegado aqui, n1 tem o menor dos 2
	
	if( turma[1].idade > turma[2].idade ){
		aux = turma[1];
		turma[1] = turma[2];
		turma[2] = aux;
	}
	// chegado aqui, n3 tem o maior dos 3
	
	if( turma[0].idade > turma[1].idade ){
		aux = turma[0];
		turma[0] = turma[1];
		turma[1] = aux;
	}
	// estão ordenados
	
	// Listar
	for(int i=0; i<3; i++){
		cout << " Nome " << i+1 << ": " << turma[i].nome << endl;
		cout << "Idade " << i+1 << ": " << turma[i].idade << endl;
	}

	return 0;
}