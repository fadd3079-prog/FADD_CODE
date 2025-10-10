#include <iostream>
using namespace std;

int main(){
    int jumlah_siswa=3;
    int siswa[jumlah_siswa];

    cout<<"masukkan nilai 100 siwa: \n";
    for (int i=0; i<jumlah_siswa; i++){
        cout<<"nilai siswa ke-"<<i+1<<" ";
        cin>>siswa[i];  
    }


    cout<<"\nhasil kelulusan: \n";
    for (int i=0; i<jumlah_siswa; i++){
        cout<<"siswa ke-"<<i+1<<" ";
        if (siswa[i]>=70 && siswa[i]<=100){
            cout<<" : lulus\n";
        
        }else if (siswa[i]>=0 && siswa[i]<70)  {
            cout<<" : tidak lulus\n";

        }else{
            cout<<" masukkan nilai yang benar!!\n";
        }
    }


    return 0;
} 