#include<vector>
#include<iostream>

int main()
{
    long long n;
    std::cin>>n;
    std::vector<long long> arr(n);
    for(int i=0;i<n;i++){
        std::cin>>arr[i];        
    }
    long long count=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            long diff=arr[i-1]-arr[i];
            arr[i]+=diff;
            count+=diff;
        }
    }
    std::cout<<count;
    return 0;
}