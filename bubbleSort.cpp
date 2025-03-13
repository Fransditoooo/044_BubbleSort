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

void bubleSortArray(){
    int pass = 1;  //step 1
    
    do
    {
       for (int j = 0; j <= n -1-pass;j++)
    {  //step 2
    
        if (arr[j] > arr[j+1]){
            int temp;
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
    
     pass = pass + 1; // step 4
        
    } while (pass <= n -1);
    }
    
    void display (){
        cout  << endl;
        cout << "=================================" << endl;
        cout << "element array yang telah tersusun" << endl;
        cout << "=================================" << endl;
        cout << endl;
        for (int j = 0; j < n; j++) {
            cout << arr[j]; //menampilkan array
            if (j < n - 1) {
                cout << " --> ";
            }
        }
        cout << endl;
        cout << endl;
        
        cout << "jumlah pass = " << n - 1 << endl; // menampilkan jumlah dari pass
        cout << endl;
        cout << endl;
        
        
        }
        
        