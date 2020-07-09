#include <iostream>
using namespace std;

int findgreaterindex(int arr[],int n, int x)
{   
    n=n-1;
    int ll=0,ul=n,mid;
    if (arr[n]<x)
    {
        return ul;
    }
    if (arr[0]>x)
    {
        return ll;
    }
    while(ll<ul)
    {
        mid=ll+(ul-ll)/2;
        if (arr[mid]==x)
        {
            return mid+1;
        }
        
        if(arr[mid]>x)
        if(arr[mid]>x&&arr[mid-1]<=x)
        {
            return mid;
        }
        else
        if(arr[mid]>=x&&arr[mid-1]<x)
        {
            return mid+1;
        }
        else
        if(arr[mid]>x)
        {
            ul=mid;
        }
        
        
        if(arr[mid]<x)
        if(arr[mid]<x&&arr[mid+1]>=x)
        {
            return mid+1;
        }
        else
        if(arr[mid]<=x&&arr[mid+1]>x)
        {
            return mid+1;
        }
        else
        if(arr[mid]<x)
        {
            ll=mid;
        }
    }
    return 0;
}
int main() {
    //Assuming that array A and X are already inputted
	acount =0,xcount=0;
	for(i=0;i<n;i++)
	    temp[i]=A[i]-X[i];
      
     //Assuming that array A and X are already sorted
	for(i=0;i<n;i++)
	{
	    acount+=findgreaterindex(A,n,temp[i]);
	    xcount+=findgreaterindex(X,n,temp[i]);
	}
	cout<<acount<<" "<<xcount;
	return 0;
}
