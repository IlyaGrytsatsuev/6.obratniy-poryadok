#include "func.hpp"
#include <fstream>
#include <iostream>
using namespace std;

int main () {
    int n;
    ifstream input("/Users/gratchuvalsky/Desktop/input.txt");
    ofstream output("/Users/gratchuvalsky/Desktop/output.txt");
        if (!input) {
            cout << "File Error" <<endl;
            return 1;
        }
        input>>n;
        int* a = new int[n];
        int i = 0;
        while(!input.eof())
        {
            input>>a[i];
                i++;
        }
    for(int i = n-1; i >= 0; i-- ){
        output<<a[i]<<"\n";
        }
    
    input.close();
    
    delete[] a;
    return 0;
}
