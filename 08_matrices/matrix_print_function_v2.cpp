#include <iostream>
#include <vector>
using namespace std;

void matrixlist(vector<vector<int>> &v);

int main() {
    vector<vector<int>> myV1(5, vector<int>(3)); 

    
    cout << "Digite os valores para a matriz (5x3):" << endl;
    for (size_t i = 0; i < 5; i++) {
        for (size_t j = 0; j < 3; j++) {
            cin >> myV1[i][j];
        }
    }

    
    cout << "Matriz:" << endl;
    matrixlist(myV1);

    return 0;
}

void matrixlist(vector<vector<int>> &v) {
    for (auto& row : v) {
        for (auto elem : row) {
            cout << elem << "\t";
        }
        cout << endl; 
    }
}
