#include <iostream>
#include <ctime>

using namespace std;

void bubblesort(int arr[],int n);
void generar(int arr[],int n);
void imprimir(int arr[],int n);

int main(){
    int arr[20];
    srand(time(NULL));
    generar(arr,20);
    cout<<"Arreglo original"<<endl;
    imprimir(arr,20);
    bubblesort(arr,20);
    cout<<endl<<"Bubblesort"<<endl;
    imprimir(arr,20);
}

void bubblesort(int arr[],int n){
    int band=1,vuelta,i;
    for(vuelta=0;vuelta<n-1 && band;vuelta++){
        band=0;
        for(i=0;i<n-vuelta;i++)
        if(arr[i]>arr[i+1]){
            int aux;
            band=1;
            aux=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=aux;
        }
    }
}

void generar(int arr[],int n){
    for(int i=0;i<n;i++)
        arr[i]=rand()%30+1;
}

void imprimir(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
