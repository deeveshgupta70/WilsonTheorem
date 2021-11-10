#include<bits/stdc++.h>

using namespace std;

long fact(long x, long n , long p){
    
    long ans = 1;
    
    while(n > 0){
        
        if( n&1){
            
            ans = ( ans*x)%p;
            n--;
        }
        
        x = (x*x)%p;
        n /= 2;
    }
    
    
    return ans;
}

int main(){
    
    long n,p;
    cin>>n>>p;
    
    if( n > p) cout<<0;
    
    else {
        
        long ans = p-1;
        
        for( int i = n+1 ; i <= p-1 ; i++){
            
            ans = (ans*fact( i , p-2 , p))%p;
        }
        
        cout<<ans;
    }
    
    
}
