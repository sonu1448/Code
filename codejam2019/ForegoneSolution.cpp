#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        string n;
        cin>>n;
        string s="";
        int flag=0;
        for(int i=0;i<n.length();i++){
            if(n[i]=='4'){
                flag=1;
                s+='2';
                n[i]='2';
            }
            else{
                if(flag==1){
                    s+='0';
                }
            }
        }
        cout<<"Case #"<<j+1<<": "<<n<<" "<<s<<endl;
    }
}