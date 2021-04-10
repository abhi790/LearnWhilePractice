#include <iostream>

using namespace std;

int fact(int n){
    unsigned long long int factorial[1000];
    factorial[0]=1;
    for(int i = 0; i<=n; i++){
        
        factorial[i] = i*factorial[i-1];
        
    }
    return factorial[n];
        
    }

int main()
{
     int t;
    cin>>t;
    while(t--){
        
    int n;
    cin>>n;
    cout<<"The factorial of "<< n << " is : ";
    cout<<fact(n)<<"\n"; 
    }
    
    return 0;
        
}