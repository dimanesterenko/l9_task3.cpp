#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{   srand(time(0));
    int N, a, b, r;
    cout << "Input N - quantity of vector: ";
    cin >> N;
    cout << "Input a - min-element n of vector: ";
    cin >> a;
    cout << "Input b -  max-element n of vector: ";
    cin >> b;
    vector<int>A;
    A.reserve(N);
    for (int i = 0; i < N; i++)
    {
        r = a + rand() % (b + 1);
        A.push_back(r);
        cout << A[i] << " ";
    }
    cout << endl;
    int k;
    cout << "Input K:  ";
    cin >> k;
    vector<int> B;
    int x;
    B = A;
    //перееробив зсув за допомогою руху масива
    for (int j = 0; j < k; j++) {
        x = A[0];
        for (int i = 0; i < A.size()-1; i++) {
           A[i]=A[i+1];
        }
        A[A.size()-1]=x;
    }

    cout << "After cutting by 1 way: ";
    for (int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }
    cout << endl;


    for (int j = 0; j < k; j++) {
        x = B.front();
        B.erase(B.begin());
        B.push_back(x);
    }

    cout << "After cutting by 2 way: ";
    for (int i = 0; i < B.size(); ++i) {
        cout << B[i] << " ";
    }

    return 0;
}
