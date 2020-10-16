#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int r=0;r<t;r++){
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
        for(it=mymap.begin();it!=mymap.end();it++){
            if(it->first!=0){
                count++;
            }
        }
        cout<<count<<endl;
    }

}
