#include <iostream>
using namespace std;

int main()
{
    int i;
    string nama[5];

    for (i = 0; i < 7; i++)
    {
        cout << i << ". " << "galih" << endl;
    }

    for( i=0; i < 5; i++){
        cout << "masukan nama = ";
        cin >> nama [i];
    }

      cout << endl;
      cout << "==============" << endl;
      cout << "kumpulan nama - nama" << endl;

    for (i=0; i < 5; i++){
           
      cout << "namanya adalah" << nama[i] << endl;
    }
}