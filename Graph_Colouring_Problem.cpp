#include<iostream>
using namespace std;
int n = 4, m = 3;
int x[] = {0,0,0,0};

int g[4][4] =  {{0,1,0,1},
		    	{1,0,1,0},
				{0,1,0,1},
	     		{1,0,1,0}};
			
void print(int n){
	int i;
	for( i = 0; i< n; i++)
		{
			cout<<x[i]<<" ";
		}
		cout<<endl;
}

bool issafe(int k, int c){
	for(int i = 0; i < n; i++){
		if(g[k][i] == 1 && c == x[i]){
			return false;
		}
		return true;
	}
}
void graph_colour(int k){
	for(int c = 1; c <= m; c++){
		if(issafe(k,c)){
			x[k] = c;
			if((k+1) < n){
				graph_colour(k+1);
			}
			else{
				cout<<"Success"<<endl<<endl;
				print(n);
			}
		}
	}
}
int main(){
	int k = 0;
	graph_colour(k);
	
	return 0;
}