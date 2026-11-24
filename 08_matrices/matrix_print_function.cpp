#include<iostream>
#include<vector>
using namespace std;
void listar (const vector<vector<int>> &v);
int main(){
    vector<vector<int>> myV (5,vector<int>(3));
    cout << "introduza valores para a matriz" << endl;
    for(size_t i=0;i<5;i++){
        for(size_t j=0;j<3;j++){
            cin >> myV[i][j];
        }
    }

    listar(myV);
}

void listar (const vector<vector<int>> &v){
     for (auto row : v) {
        for (auto elem : row) {
            cout << elem << "\t";
        }
        cout << endl; 
    }
}