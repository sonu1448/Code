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
		int f=0;
		p[0]=change(p[0]);
		p[2*n-3]=change(p[2*n-3]);
		if(p[0]==p[2*n-3]){
		    f=1;
		}
		//cout<<f<<endl;
		for(int i=1;i<(2*n-3);i++){
		        if(p[i]==p[i+1]  && p[i]==p[0] && f!=0){
		        	p[i]=change(p[i]);
		        	p[i+1]=change(p[i+1]);
		        	break;
				}
		}
		cout<<"Case #"<<z<<": "<<p;
		cout<<endl;
	}
	return 0;
}
