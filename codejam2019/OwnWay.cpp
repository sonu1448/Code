#include<bits/stdc++.h>
using namespace std;
char change(char s){
	if(s=='S')
		return 'E';
	else
		return 'S';
}
int main(){
	int t;cin>>t;
	for(int z=1;z<=t;z++){
		int n;cin>>n;
		string p;
		cin>>p;
		char result[2*n-2];
		int f=0,temp=0;
		result[0]=change(p[0]);
		result[2*n-3]=change(p[2*n-3]);
		if(p[0]==p[2*n-3]){
		    f=1;
		}
		cout<<f<<endl;
		for(int i=1;i<(2*n-3);i++){
		        if(p[i]==p[i+1]  && p[i]!=p[0] && f!=0){
		        	result[i]=change(p[i]);
		        	result[i+1]=change(p[i]);
		        	f=0;
		        	i++;
				}
				else
					result[i]=p[i];
		}
		cout<<"Case #"<<z<<": "<<result;
		cout<<endl;
	}
	return 0;
}
