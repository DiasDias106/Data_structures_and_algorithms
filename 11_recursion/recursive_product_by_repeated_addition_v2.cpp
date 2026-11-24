#include<iostream>
using namespace std;

void prod( int n1, int n2, int &res ){

    if( n2 == 0 ) return;
    
    prod( n1, --n2, res);
    res += n1;
}

int main(){
    int n1, n2, res=0;

    cout << "N1: "; cin >> n1;
    cout << "N2: "; cin >> n2;
    prod( n1, n2, res );
    cout << "Produto: " << res;
    return 0;
}