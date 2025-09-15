#include <iostream>
using namespace std;

int main() {
    int N = 0;

    cout << "Enter N : ";
    cin >> N;

    int block_N[N];

    //ลูปนอกสุด ไล่arrayทีละตัว
    for( int i = 0 ; i < N ; i++ ) {
        int prime = 1;

        cout << "Enter value[" << i << "] : " << endl;
        cin >> block_N[i];

        //ลูปใน เอาตัวarrayที่ไล่มา เช็คว่ามีตัวหารลงตัวมั้ย
        for( int j = 2 ; j < block_N[i] ; j++ ) {
            if( block_N[i] % j == 0 ) {
                prime = 0;
                break;
            }
        }

        if( prime == 0 ) {
            block_N[i] = -1;
        }
    }

    cout << "Index : ";
    //ลูป print Index
    for( int i = 0 ; i < N ; i++ ) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Array : ";
    //ลูป print Array
    for( int i = 0 ; i < N ; i++ ) {
        if( block_N[i] == -1 ) {
            cout << "# ";
        }else {
            cout << block_N[i] << " ";
        }
    }

}