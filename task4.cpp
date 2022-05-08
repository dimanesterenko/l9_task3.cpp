#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> A = { 20,15,15,-5,-2,8,8,7,6,5,5,4 };
    int n = 0;
    //initial array
    cout << endl;
    for (int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "size: " << A.size() << "\n";
    cout << "capacity: " << A.capacity() << "\n";
    cout << "max_size: " << A.max_size() << "\n";
    vector <int>::iterator it = A.begin();
    for (int i = 0; i < A.size() - 1; i++)
    {
        if (A[i] == A[i + 1]) {
            n = 1;
            A.erase(it + i);
            i--;
        }
        else {
            if (A[i] != A[i + 1] && n == 1) {
                A.erase(it + i);
                i--;
                n = 0;
            }
        }

    }

    cout << "After removal: ";
    cout<<endl;
    for (int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "size: " << A.size() << "\n";
    cout << "capacity: " << A.capacity() << "\n";
    cout << "max_size: " << A.max_size() << "\n";

    int K;
    cout << "Input K : ";
    cin >> K;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] < 0) {
            A.insert(it + i, K);
            i++;
        }
    }
    cout <<"After insert: ";
    for (int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "size: " << A.size() << "\n";
    cout << "capacity: " << A.capacity() << "\n";
    cout << "max_size: " << A.max_size() << "\n";
    return 0;
}








/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> A = { 20,15,15,-5,-2,8,8,7,6,5,5,4 };
    int n = 0;
    //initial array
    cout << endl;
    for (int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "size: " << A.size() << "\n";
    cout << "capacity: " << A.capacity() << "\n";
    cout << "max_size: " << A.max_size() << "\n";

    for (int i = 0; i < A.size() - 1; i++)
    {
        if (A[i] == A[i + 1]) {
            n = 1;
            A.erase(A.begin() + i);
            i--;
        }
        else {
            if (A[i] != A[i + 1] && n == 1) {
                A.erase(A.begin() + i);
                i--;
                n = 0;
            }
        }

    }

    cout << "After removal: ";
    cout<<endl;
    for (int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "size: " << A.size() << "\n";
    cout << "capacity: " << A.capacity() << "\n";
    cout << "max_size: " << A.max_size() << "\n";

    int K;
    //code for inserting K
    cout << "Input K : ";
    cin >> K;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] < 0) {
            A.insert(A.begin() + i, K);
            i++;
        }
    }
    cout << "After insert: ";
    for (int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "size: " << A.size() << "\n";
    cout << "capacity: " << A.capacity() << "\n";
    cout << "max_size: " << A.max_size() << "\n";
    return 0;
}
*/