#include<vector>
#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    long long sum=0;
    std::vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        std::cin>>arr[i];
        sum+=arr[i];
        
    }
    std::cout<<n*(n+1)/2-sum;
    return 0;
}