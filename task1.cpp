#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int Sum = 0, k=0;
    vector <double> A = {2.75,1.3,10.10,16.8,7.3,6.2};
    cout << "Elements of array A:" << endl;
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
    cout << endl << "Array size: " << A.size() << endl;

   for (int i = 0; i < A.size() ; i++)
    {
        for (i = 0; i < A.size() - 1; i++) {
            if (A[i] > A[i + 1]) k=1;
            else {
                if (k)Sum++;
                k=0;
            }
        }
        if (k)Sum++;
    }
    cout << "Quantity of descending areas: " << Sum;
    return 0;
}

