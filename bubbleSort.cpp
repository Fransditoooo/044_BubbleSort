#include <iostream>
#include <string>
using namespace std;


int arr[20];
int n;

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array";
        cin >> n;
        if (n <= 20)
            break;
        else {
                cout << "\nArray dapat mempunyai maksimal 20 element. \n";

        }
    }
    cout << endl;
    cout << "=============="
    cout << "Masukkan Elemen Array" << endl;
    cout << "=============="

    for (int i = 0; i <n; i++){
        cout << "Data ke-" << (1+1) <<";";
        cin >> arr(i);
    }



}

