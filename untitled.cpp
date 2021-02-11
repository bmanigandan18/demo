#include<iostream>
#include<unordered_set>
using namespace std;
int helperFunc(int arr[],int n,int k )
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
            count++;
    }
    return count;
}
int main()
{
    int n,sum;
    int arr[n];
    bool flag=false;
    unordered_set<int> s1;
    cin>>n>>sum;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s1.insert(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(sum-arr[i]==arr[i])
        {
            if(helperFunc(arr,n,arr[i])>=2)
                flag=true;
            else
            {
                flag=false;
            }
            break;
        }
        else if(s1.find(sum-arr[i])!=s1.end())
        {
            flag=true;
            break;
        }
    }
    if(flag)
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}