#include<iostream>
int main(){
    int result=1,num,i;
    std::cout<<"enter the number:";
    std::cin>>num;
    for(i=1;i<=num;i++)
    {
        result=result*i;
    }
    std::cout<<"Factorial of given number is:"<<result;
}