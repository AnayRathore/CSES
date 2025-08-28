#include<vector>
#include<iostream>

int main()
{
    long long n;
    std::cin>>n;
    long long sum=0;
    std::vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        std::cin>>arr[i];
        sum+=arr[i];
        
    }
    long long total=n*(n+1)/2;
    std::cout<<total-sum;
    return 0;
}