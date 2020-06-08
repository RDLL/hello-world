#include <iostream>
#include <ctime>

#define N 20

using namespace std;


int main(){
    int arr[N];
    int l,n,m;
    l=n=m=0;
    srand(time(NULL));
    for(int i=0;i<N;i++)
        arr[i]=rand()%151;
     for(int i=0;i<N;i++){
        if(arr[i]<51)
            l++;
        if(arr[i]>50 && arr[i]<101)
            n++;
        if(arr[i]>100)
            m++;
    }
    int lista1[l],lista2[n],lista3[m];
    int x,y,z;
    x=y=z=0;
    for(int i=0;i<N;i++){
        if(arr[i]<51){
            lista1[x]=arr[i];
            x++;
        }
        if(arr[i]>50 && arr[i]<101){
            lista2[y]=arr[i];
            y++;
        }
        if(arr[i]>100){
            lista3[z]=arr[i];
            z++;
        }
    }
    cout<<"Arreglo original"<<endl;
    for(int i=0;i<N;i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
    cout<<"Primera lista 0-50"<<endl;
    for(int i=0;i<l;i++)
        cout<<lista1[i]<<"\t";
    cout<<endl;
    cout<<"Segunda lista 51-100"<<endl;
    for(int i=0;i<n;i++)
        cout<<lista2[i]<<"\t";
    cout<<endl;
    cout<<"Tercera lista 101-150"<<endl;
    for(int i=0;i<m;i++)
        cout<<lista3[i]<<"\t";
    cout<<endl;
}
