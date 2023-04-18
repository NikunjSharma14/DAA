#include<iostream>
using namespace std;
int x[] = {0,0,0,0};
int board[4][4]={{0,0,0,0},
			   	{0,0,0,0},
				{0,0,0,0},
				{0,0,0,0}};
				
void print(int n){
	for(int i = 0; i< n; i++)
		{
			cout<<i<<":"<<x[i]<<"\n";
		}
		cout<<endl;
}
void print(int board[4][4], int n){
	for(int i = 0; i< n; i++){
		for(int j = 0; j < n; j++){
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
}
bool place(int k, int i){
	
	for(int j = 0; j < k; j++){
		
		if(x[j] == i || abs(x[j] - i) == abs(j - k)){
			return false;			
	}
			return true;
}

void nqueen(int k, int n){
	

	for(int i = 0; i < n; i++){
		if(place(k,i) == true){
			x[k] = i;
			
			if(k == n - 1){
				print(n);
				print(board,n);
			}
			else{
				nqueen(k+1, n);
			}
		}
	}
}
int main()
{
	int n = 4, k = 0;
	cout<<"Enter the number of queens :- ";
	cin>>n;

	nqueen(k,n);
	return 0;
}