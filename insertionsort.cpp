#include <iostream>
#include <ctime>

using namespace std;

void insertionsort(int arr[],int n);
void generar(int arr[],int n);
void imprimir(int arr[],int n);

int main(){
    int arr[20];
    srand(time(NULL));
    generar(arr,20);
    cout<<"Arreglo original"<<endl;
    imprimir(arr,20);
    insertionsort(arr,20);
    cout<<endl<<"Insertionsort"<<endl;
    imprimir(arr,20);
}

void insertionsort(int arr[],int n){
    int i,j,aux;
    for(i=1;i<n;i++){
        j=i;
        aux=arr[i];
        while(j>0 && aux<arr[j-1]){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=aux;
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
