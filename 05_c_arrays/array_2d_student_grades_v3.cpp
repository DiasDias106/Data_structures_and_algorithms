#include<iostream>
using namespace std;
int main(){
    int num[2][3];
    int dim = sizeof(num)/sizeof(num[0][0]);
    cout << dim << endl;
    for(size_t i=0;i<2;i++){
       cout << "aluno:\t" << i+1 << endl;
       for(size_t j=0;j<3;j++){
        cout << "introduza numero:" << endl;
        cin >> num[i][j];
       }
    }
     for(size_t i=0;i<2;i++){
       cout << "aluno:\t" << i+1 << endl;
       for(size_t j=0;j<3;j++){
        cout << "introduza numero:" << endl;
        cout << num[i][j];
       }
    }
}