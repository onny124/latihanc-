#include <iostream>

using namespace std;

int main()
{
    int i;
    string sm[] = {"haechan", "sehun", "jaemin", "jaehyun", "doyoung"};
    cout << "Yang paling tampan di sm adalah " << sm[1]<<endl;
    cout << "Diantara: ";
    for(i=0; i<5; i++){
        cout << sm[i] << ", ";
    }
    return 0;
}
