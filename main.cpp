#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N,i,j,t;
    string s ;
    cout<<"inserisci il numero di automobili"<<endl;
    cin>> N;
    vector<string>nomi(N);
    vector<float>posizioni(N);
    i=0;
    while(i<N)
    {
       cout<<"inserisci il nome dell'automobile"<<endl;
       cin>> nomi(i);
       cout<<"inserisci la posizione dell'automobile"<<endl;
       cin>> voti(i);
       i=i+1;             
    }
 i=0
 while(i<N)
 {
     j=0;
     while(j<(N-1)-i)
     {
         if(posizioni(j)>posizioni(j+1))
         {
             t=posizioni(j);
             posizioni(j)=posizioni(j+1);
             posizioni(j+1)=t;
             s=nomi(j);
             nomi(j)=nomi(j+1);
             nomi(j+1)=s;
         }
     j=j+1;
     }
 i=i+1;
 }
i=0;
while(i<N)
{
 cout<< nomi(i);
 cout<< posizioni(i);
 i=i+1;
}


}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
