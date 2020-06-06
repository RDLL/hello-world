#include <iostream>

using namespace std;

void generar(float mat[10][12]);
float media(float mat[10][12]);
void listado(float mat[10][12]);

int main(){
    float mat[10][12];
    generar(mat);
    listado(mat);
}

void listado(float mat[10][12]){
    float med,r;
    med=media(mat);
    cout<<"La media es: "<<med<<endl;
    for(int i=0;i<10;i++){
        r=0;
        for(int j=0;j<12;j++)
                r+=mat[i][j];
        r/=12;
        if(r>med)
            cout<<"El almacen "<<i+1<<" tuvo ventas superiores a la media"<<endl;
    }
}

float media(float mat[10][12]){
    float r=0;
    int i,j;
    for(i=0;i<10;i++)
        for(j=0;j<12;j++)
            r+=mat[i][j];
    return r/120;
}

void generar(float mat[10][12]){
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<12;j++){
            cout<<"Dame las ventas del mes "<<j+1<<" del almacen "<<i+1<<" : ";
            cin>>mat[i][j];
        }
    }
}
