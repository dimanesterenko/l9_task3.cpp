#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> Mas;
    vector <int> A{ 3,7,8,90,349};
    vector <int> B{ 4, 6, 15,100};
    cout << "Array A: ";
    for (int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Array B: ";
    for (int i = 0; i < B.size(); ++i) {
        cout << B[i] << " ";
    }
    cout << endl;
    int i = A.size()-1, j = B.size()-1;
    while (i >= 0 && j >= 0) {
        if (A[i] > B[j]) {
            Mas.push_back(A[i]);
            i--;
        }
        else {
            Mas.push_back(B[j]);
            j--;
        }
    }
    if (i > 0) {
        for (i; i >= 0; i--) {
            Mas.push_back(A[i]);
        }
    }
    if (j > 0) {
        for (j; j >= 0; j--) {
            Mas.push_back(B[j]);
        }
    }
    cout << "New array: ";
    for (int i = 0; i < Mas.size(); i++) {
        cout << Mas[i] << " ";
    }
    cout << endl;
    return 0;
}