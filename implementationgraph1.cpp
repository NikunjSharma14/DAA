#include<iostream>
using namespace std;
int arr[4][4];
void printElements(){
    for(int i=0; i<=3; i++){
        cout<<endl;
        for(int j=0; j<=3; j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    
}
void addEdge(int m, int n){
    arr[m][n]=1;
    arr[n][m]=1;
}
int main(){
    for(int i=0; i<=3; i++){
        for(int j=0; j<=3; j++){
            arr[i][j]=0;
        }
    }
    char ch='Y';
    int i, j;
    while(ch=='Y'){
        cout<<"Enter the edge you want to insert:\n";
        cin>>i>>j;
        addEdge(i, j);
        cout<<"Do you want to insert another edge (ENTER Y/N): ";
        cin>>ch;
    }
    
    cout<<"Adjacency matrix representation:\n";
    printElements();

    return 0;
}