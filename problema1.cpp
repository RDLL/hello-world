#include <iostream>
#include <ctime>

#define N 20

using namespace std;


void generar(int arr[]);
void tam(int arr[],int *l,int *n,int *m);
void separar(int arr[],int arr1[],int arr2[],int arr3[]);
void imprimir(int arr[],int n);

int main(){
    int arr[N];
    int l,n,m;
    l=n=m=0;
    srand(time(NULL));
    generar(arr);
    tam(arr,&l,&n,&m);
    int lista1[l],lista2[n],lista3[m];
    separar(arr,lista1,lista2,lista3);
    cout<<"Arreglo original"<<endl;
    imprimir(arr,N);
    cout<<"Primera lista 0-50"<<endl;
    imprimir(lista1,l);
    cout<<"Segunda lista 51-100"<<endl;
    imprimir(lista2,n);
    cout<<"Tercera lista 101-150"<<endl;
    imprimir(lista3,m);
}

void generar(int arr[]){
    for(int i=0;i<N;i++)
        arr[i]=rand()%151;
}

void tam(int arr[],int *l,int *n,int *m){
    int x,y,z;
    x=y=z=0;
    for(int i=0;i<N;i++){
        if(arr[i]<51)
            x++;
        if(arr[i]>50 && arr[i]<101)
            y++;
        if(arr[i]>100)
            z++;
    }
    *l=x;
    *n=y;
    *m=z;
}
void separar(int arr[],int arr1[],int arr2[],int arr3[]){
    int x,y,z;
    x=y=z=0;
    for(int i=0;i<N;i++){
        if(arr[i]<51){
            arr1[x]=arr[i];
            x++;
        }
        if(arr[i]>50 && arr[i]<101){
            arr2[y]=arr[i];
            y++;
        }
        if(arr[i]>100){
            arr3[z]=arr[i];
            z++;
        }
    }
}

void imprimir(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}
