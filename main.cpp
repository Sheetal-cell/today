//Find float part in squareroot
#include <iostream>
using namespace std;
long long int square(int n)
{
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long ans =-1;
    while(s<=e)
    {
        long long int sq=mid*mid;
        if (sq==n);
        return mid;
        if(sq<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double precision(int n,int precise,int tempSol)
{
    double factor=1;
    for(int i=0;i<precise;i++)
    {
        factor=factor/10;
        for(double j=tempSol;j*j<n;j=j+factor)
        {
           tempSol=j;
        }
    }
    return tempSol;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int temp=square(n);
    cout<<"Answer is:"<<precision(n,3,temp)<<endl;
    return 0;
}
