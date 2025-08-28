#include<string>
#include<iostream>
int main()
{
    std::string s;
    std::cin>>s;
    int c=1;
    int m=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            c++;
        }
        else{
            m=std::max(m,c);
            c=1;
        }
    }
    std::cout<<std::max(m,c);
    return 0;
}