#include<iostream>
using namespace std;

class matrix{
     int **p; //deklarasi pointer
     int d1, d2;//deklarasi matrix
     int transpose[10][10];
     int matrix[10][10];

 public:
     matrix(int x, int y);
     void get_element(int i, int j, int value){ p[i][j]=value; }
     int &put_element(int i,int j) { return p[i][j]; }
};

matrix::matrix(int x, int y){      
    d1 = x;
    d2 = y;
    p = new int *[d1];
    for(int i = 0; i < d1; i++) p[i] = new int[d2];
}

int main(){
	cout<<"TUGAS POINTER"<<endl;
	cout<<"EGGIE YAYANG DEWANGGA RILANGI"<<endl;
	cout<<"F1B016025"<<endl;
    int m, n;
    cout << "masukkan ukuran matriks: \n";
    cin >> m >> n;
    matrix A(m, n);

    cout << "masukkan elemen matriks baris demi baris\n";
    int i, j, value;

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++){
            cin >> value;
            A.get_element(i, j, value);
        }
        cout << "\n";
        for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      transpose[j][i] = matrix[i][j];
    }
  }

  cout << "Hasil Transpose Matriks: \n";
  for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
      cout << transpose[i][j] << "\t";
    }
       

    return 0;
}
;
