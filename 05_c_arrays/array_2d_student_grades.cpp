#include<iostream>
using namespace std;
int main(){
    int turma[2][10];
    for(int i=0;i<2;i++){
        for(int j=0; j<10;j++){
           cout << "introduza numero de aluno:" << endl;
           cin >> turma[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<10;j++){
            cout << turma[i][j] << endl;
        }
    }
}