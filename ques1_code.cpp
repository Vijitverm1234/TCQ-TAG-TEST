#include<bits/stdc++.h>
using namespace std;
void solve(string s, int i, int n, vector<string> &res){
   if(i>=n){
         res.push_back(s);
         return;
   }
   for(int ind=i;ind<n;ind++){
       swap(s[i],s[ind]);
       solve(s,i+1,n,res);
       swap(s[i],s[ind]);
   }
}
int main(){
    int n;
    cin>>n;
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c;
    cin>>c;
    string temp="";
    for(int i=0;i<a;i++){
        temp+='A';  
    }
    for(int i=0;i<b;i++){
        temp+='B';  
    }
    for(int i=0;i<c;i++){
        temp+='C';      
    }
    cout<<"String is: "<<temp<<endl;
    vector<string> res;
  
    solve(temp,0,n,res);
    cout<<"All combinations are: "<<endl;
    for(auto str:res){
        cout<<str<<endl;        
    }
    return 0;
}