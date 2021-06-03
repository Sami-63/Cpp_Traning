#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll tree[400000];

void set_tree(int ind,int i,int j,int pos,int x){

    if(i>pos || pos>j) return;
    
    if(i==j){
        if(i==pos)tree[ind]= x;
        return;
    }
        
    int mid=(i+j)/2;
    if(pos<=mid)set_tree(2*ind, i,mid,pos,x);
    else set_tree(2*ind+1,mid+1,j,pos,x);

    tree[ind]=tree[2*ind]+tree[2*ind+1];
}

ll ask(int ind,int i,int j,int l,int r){

    if(l<=i && j<=r) return tree[ind];
    
    if(i>r || j<l)return 0;
    
    int mid=(i+j)/2;
    return ask(2*ind,i,mid,l,r) + ask(2*ind+1,mid+1,j,l,r);

}

void solve(){
    ll n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        int x;
    cin>>x;
    set_tree(1,0,n-1,i,x);
    }
    
    for(int i=0;i<m;i++){
        
        int op,x,y;
        cin >> op >> x >> y;
        if(op==1)
    set_tree(1,0,n-1,x,y);
        else 
    cout << ask(1,0,n-1,x,y-1) << endl;
    }
    
}

int main(){

    int t=1;
    //cin >> t;
    
    while(t--)
         solve();
    
    return 0;
}