#include<iostream>
using namespace std;
int main () {
    cout << "index" << "\t"<< "value"<<"\t"<<"mem address"<<endl;
    int A[7] = {10, 11, 12, 13, 14, 15, 16};
    for (int i = 0; i < 7; i++) {
        cout << i <<"\t"<< A[i]<<"\t"<<&A[i] << endl;
    }
    return 0;
}