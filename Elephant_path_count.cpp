#include<iostream>
using namespace std;
int Elephant(int n,int m){
	if(n==0 && m==0){
		return 1;
	}
	int sum=0;
	for(int k=0;k<n;k++){
		sum+=Elephant(k,m);
	}
	for(int k=0;k<m;k++){
		sum+=Elephant(n,k);
	}
	return sum;
}
int main(){
	int n,m;
	cin>>n>>m;
	cout<<Elephant(n,m);
	return 0;
}
