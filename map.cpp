#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mymap;
        map<int,int>::iterator it;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            mymap[a]++;

        }
       
        int count=0;

        for(auto it:mp)if(it.first!=0)count++;
       
        cout<<count<<endl;
    }

}
