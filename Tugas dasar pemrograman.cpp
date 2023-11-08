#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"NAMA	: NAUFAL RAFID RAHMAWAN"<<endl;
	cout<<"NIM	: 2300018021"<<endl;
	cout<<"KELAS	: A"<<endl;
	cout<<"====================================================="<<endl;
	cout<<"\t\t DASAR PEMROGRAMAN"<<endl;
	cout<<"====================================================="<<endl;
	cout<<"Masukkan jumlah : ";
	cin >>n;
	cout<<"Hasil petak :"<<endl;
	
	for (int i = 0; i <= (n*n); i++) {
    	for (int j = 0; j <= (n*n); j++) {
           if (i == 0 || (i % n == 0) || (j == 0) || (j % n == 0)) {
                cout <<"* ";
            } else {
               cout <<"  ";
           }
       }
        cout << '\n';
    }
    return 0;
}
	

