#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void ordena(vector<int>& v) {
    sort(v.begin(), v.end());
}

int main() {
    vector<int> myV1(5);
    for(size_t i = 0; i < 5; i++) {
        cout << "Introduza numero: " << endl;
        cin >> myV1[i];
    }
    ordena(myV1);

    cout << "Vector ordenado: ";
    for(size_t i = 0; i < 5; i++) {
        cout << myV1[i] << " ";
    }
    cout << endl;

    return 0;
}