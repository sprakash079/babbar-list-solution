#include<bits/stdc++.h>
using namespace std;

void rever(int a[],int n){
	//int n=sizeof(a)/sizeof(int);
	int j=n-1;
	for(int i=0;i<n;i++){
		if(i<=j){
			int tem= a[j];
			a[j]=a[i];
			a[i]=tem;
		}
		j--;
		
		
	}
	for(int i=0;i<n;i++){
		cout<<a[i] << " ";
	}
	
	
	
}


int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		rever(a,n);
		
	}
	return 0;
}
