//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int a[], int b[], int n, int m, int x) {
        //code here
    int v = 0 ; 
    int first = 0 ; 
    int second = 0 ; 
    int bv = 100000000 ; 
    int j = m - 1  ; 
    int i = 0 ;
    int kk8 = 0 ; 
    int kk5 = 0 ;
    int g5 = 0 ; 
    int g8 = 0 ; 
    while(i<n && j>=0){
        
       if(a[i]+b[j]<=x){
           
           int sum = a[i] + b[j] ; 
           if(sum>v){
               v = sum ; 
               first = a[i] ; 
               second = b[j] ; 
               g5 = 1 ; 
               
           }
           
           i = i + 1 ; 
       }
       
       else {
          
           if((a[i]+b[j])<bv){
              bv = a[i] + b[j] ;
              kk5 = a[i] ; 
              kk8 = b[j] ;
              g8 = 1 ; 
           }
            j = j - 1 ; 
       }
        
        
    }
    
    vector <int> r ; 
   
    if(g5==1){
        int dv = abs(x-v);
        if(g8==1){
            int dy = abs(x-bv);
            if(dy<dv){
                 r.push_back(kk5);
                 r.push_back(kk8);
            }
            
            
            else {
        r.push_back(first);
        r.push_back(second);
                
            }
        }
        else {
        r.push_back(first);
        r.push_back(second);
        }
    }
    
    else {
        r.push_back(kk5);
        r.push_back(kk8);
    }
    

    
    return r ; 
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends