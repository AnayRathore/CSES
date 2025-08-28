#include <iostream>
int main() {
    long long n;
    std::cin>>n;
    std::cout<<n<<" ";
    while(n!=1){
        if(n&1){
            n=n*3+1;
        }
        else{
            n=n/2;
        }
        std::cout<<n<<" ";
    }
    return 0;
}