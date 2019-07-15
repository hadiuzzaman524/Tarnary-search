#include <iostream>

using namespace std;

int tarnary_search(int ar[],int low,int high,int key)
{
    int midfirst=low+(high-low)/3;
    int midsecond=high-(high-low)/3;
    if(ar[midfirst]==key)
    {
        return midfirst;
    }
    if(ar[midsecond]==key)
    {
        return midsecond;
    }
    if(key<ar[midfirst])
    {
        tarnary_search(ar,low,midfirst,key);
    }
    else if(key>ar[midsecond])
    {
        tarnary_search(ar,midsecond+1,high,key);
    }
    else
    {
        tarnary_search(ar,midfirst+1,midsecond,key);
    }

}

int main()
{
    // write your code here
    int ar[]= {1,3,4,5,7,8,9,10,12,14,15,22,23,31};
    int n=sizeof(ar)/sizeof(int);
    int z=tarnary_search(ar,0,n,14);
    cout<<"the searching element index is: "<<z<<endl;
}
