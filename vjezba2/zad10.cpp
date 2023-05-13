#include <iostream>		//TOCAN
using namespace std;

void selection2Sort (int A[], int n, char smjer) {
     if (smjer == '0')
    { // uzlazno sortiranje
        int i, j;
        for (i = 0; i < n; i++)
        {
            int min = i;
            for (j = i + 1; j < n; j++)
            {
                if (A[j] < A[min])
                    min = j;
            }
            int temp = A[i];
            A[i] = A[min];
            A[min] = temp;
        }
    }
    else
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
            int max = i;
            for (j = i + 1; j < n; j++)
            {
                if (A[j] > A[max])
                    max = j;
            }
            int temp = A[i];
            A[i] = A[max];
            A[max] = temp;
        }
    }
}

int main(void) {
    int n;
    char smjer;
    cout << "Unesite velicinu > ";
    cin >> n;
    int arr[n];
    cout << "Unesite clanove > " << endl;
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << "Unesite smjer > ";
    cin >> smjer;
    selection2Sort(arr, n, smjer);
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
}
