#include<iostream>
using namespace std;
int main(){
	int obj[] = {1,2,3,4};
	int weight[] = {1,3,4,5};
	int profit[] = {1,4,5,7};
	int capacity = 7;
	int matrix [5][capacity + 1];
	for(int i=0; i<=4;i++){
		for(int j=0; j<=capacity;j++){
			if(i==0 || j==0){
				matrix [i][j] = 0;
			}
			else if(weight[i] <= j){
				weight[i] <= j;
				matrix[i][j] = max(matrix[i-1][j] , matrix[i-1][j-weight[i]] + profit[i]); 		
			}
			else{
				matrix[i][j] = matrix [i-1][j];
			}
		}
	}
	for(int i=0; i<=4;i++){
		for(int j=0; j<=capacity;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}