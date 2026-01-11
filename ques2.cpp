#include<bits/stdc++.h>
using namespace std;    
int main(){
    string s1="abcdebdde";
    string s2="bde";
    int n1=s1.size();
    int n2=s2.size();
    int i=0;
   
    int maxi=INT_MAX;
    string ans="";
    while(i<n1){
        int j=0;
        while(i<n1){ if(s1[i]==s2[j]){
       
            j++;
            if(j==n2){
                break;
            }
        }
            i++;
    }
       
    
    if(j<n2) break;
    int end=i;
     j=n2-1;
    while(j>=0){
        if(s1[i]==s2[j]){
            j--;
        }
        i--;
    } 
    int start=i+1;
    if(end-start+1<maxi){
        maxi=end-start+1;
        ans=s1.substr(start,end-start+1);
    }
    i=start+1;
}
cout<<ans<<endl;
}