#include<iostream>
using namespace std;
int n=5, k=0;
int x[] = {0,0,0,0,0};
int adj[5][5] = {{0,1,0,0,1},
				{1,0,1,0,0},
				{0,1,0,1,0},
				{0,0,1,0,1},
				{1,0,0,1,0}};
				
void print(int n){
	int i;
	for( i = 0; i< n; i++)
		{
			cout<<x[i]<<" ";
		}
		cout<<endl;
}

int nextvisited(int k){
	do{
		x[k] = ((x[k] + 1) % (n+1));
		if(x[k] == 0){
			return 0;
		}
		if(adj[x[k + 1]], x[k] == 1){
			for(int j = 1; j < k; j++){
				if(x[j] == x[k]){
					break;
				}
			}
		}
		
	}
}

void ham(int k){
	do{
		nextvisited(k);
		if(x[k] == 0){
			return 0;
		}
		else if(k==n){
			print(n);			
		}
		else{
			ham(k+1);
		}
	}
}while

int main(){
	
	return 0;
}