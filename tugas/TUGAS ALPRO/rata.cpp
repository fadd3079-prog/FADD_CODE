#include <iostream>
using namespace std;

int main (){
    int nilai[5]={70,89,90,78,88};
    int total=0;
    float rata;
    for(int i=0;i<5;i++){
       total=total + nilai[i];
    }

    rata=(float)total/5;
    cout<<"rata rata= "<<rata<<endl;   
    return 0;
}

