#include<bits\stdc++.h>
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
// int getProduct(int i,vector<int>nums,int target,int f)
// {
//     if(target==0)
//     return 1;

//     if(i<0)
//     return INT_MIN;

//     if(i==0 and target==1)
//     return nums[i];
//     else if(i==0)
//     return INT_MIN;
    
//     if(i+1<target)
//     return INT_MIN;
   
//     //base case
//     int n=nums[i];
//     {
//         if(n>0)
//         int t=1;
//         else
//         int t=-1;

//         int a=getProduct(i-1,nums,target,-1);
//         int b=getProduct(i-1,nums,target);
//         if(a!=INT_MIN and b!=INT_MIN)
//         return max(n*a,b);
        
//         if(b!=INT_MIN)
//         return b;
//         else
//         return a*n;
//     }
// }
int main()
{
    
    int t; cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>nums;
        for(int i=0;i<n;i++)
        {
            int r;cin>>r;
            nums.push_back(r);
        }
        sort(nums.begin(),nums.end());
        int prod=1;
        for(int i=nums.size()-1;i>=nums.size()-1-4;i--)
        {
            
            prod=(int)prod*nums[i];
        }
        cout<<"Hello"<<endl;
    }

}