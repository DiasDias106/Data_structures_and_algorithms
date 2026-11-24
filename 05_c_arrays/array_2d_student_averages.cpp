#include<iostream>
using namespace std;
int main(){
    int alunos[3][4];
    float media[3];

    for(size_t i=0;i<3;i++){
        cout << "aluno n:\t" << i+1 << endl;
        for(size_t j=0;j<4;j++){
            cout << "introduza uma nota"<<endl;
            cin >> alunos[i][j];
            media[i] = media[i] +  alunos[i][j]; 
        }
    }
    for(size_t i=0;i<3;i++){
        cout << "aluno n:\t" << i+1 << endl;
        cout << "medias" << media[i]/4 << endl;
        for(size_t j=0;j<4;j++){
            cout << "notas" << alunos[i][j];

        }
    }
    

}