#include <iostream>

using namespace std;

int main()
{
    int i;
    for(i=0; i<10; i++){
        cout << "Perulangan ke "<< i << endl;
    }

    int j = 0;
    char tambah = 'y';
    cout << "===  While ==="<< endl;
    while(tambah == 'y'){
        cout << "Perulangan  ke " << j << endl;
        cout << "Apakah ingin nambah? (y/n) ";
        cin >> tambah;
        j++;
    }

    return 0;
}
