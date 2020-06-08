#include <iostream>
#include <ctime>

using namespace std;

void selectionsort(int arr[],int n);
void generar(int arr[],int n);
void imprimir(int arr[],int n);

int main(){
    int arr[20];
    srand(time(NULL));
    generar(arr,20);
    cout<<"Arreglo original"<<endl;
    imprimir(arr,20);
    selectionsort(arr,20);
    cout<<endl<<"Selectionsort"<<endl;
    imprimir(arr,20);
}

void selectionsort(int arr[],int n){
    int ind,i,j;
    for(i=0;i<n-1;i++){
        ind=i;
        for(j=i+1;j<n;j++)
            if(arr[j]<arr[ind])
                ind=j;
            if(i!=ind){
                int aux=arr[i];
                arr[i]=arr[ind];
                arr[ind]=aux;
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
