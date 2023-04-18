#include<iostream>
#include<vector>
using namespace std;
int main(){
    int V,E;
    cin>>V;
    cin>>E;
    vector<vector<int>> adjmatrix(V,vector<int>(V,0));
    int i=0;
    while (i<E)
    {
       int from,to;
       cin>>from>>to;
       adjmatrix[from][to]=1;
       adjmatrix[to][from]=1;
       i++;
       
    }
    
}


