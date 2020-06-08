#include <iostream>

using namespace std;

void capturar(float arr[],int n);
void suma(float a[],float b[],float c[],int n);
void imprimir(float arr[],int n);

int main(){
    float a[10],b[10],c[10];
    capturar(a,10);
    capturar(b,10);
    suma(a,b,c,10);
    cout<<"Primer arreglo"<<endl;
    imprimir(a,10);
    cout<<"Segundo arreglo"<<endl;
    imprimir(b,10);
    cout<<"Tercer arreglo"<<endl;
    imprimir(c,10);
}


void capturar(float arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"Dame un numero con decimal: ";
        cin>>arr[i];
    }
}

void suma(float a[],float b[],float c[],int n){
    int i,j;
    for(i=0,j=n-1;i<n && j>=0;i++,j--)
        c[i]=a[i]+b[j];
}

void imprimir(float arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
