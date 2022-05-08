#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int K;
    cout << "Input K: ";
    cin >> K;
    vector <int> A(K);
    vector <int> B;
    for (int i = 0; i < K; i++)
    {
        cout << "A[" << i << "] = ";
        cin>>A[i];
    }
    cout << "Array A" << endl;
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
        if (A[i] % K== 0) {
            B.push_back(A[i]);
        }
    }
    cout << endl << "Array B" << endl;
    for (int i = 0; i < B.size(); i++) {
        cout << B[i] << " ";
    }
    return 0;
}