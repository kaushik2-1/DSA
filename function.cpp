#include<iostream>
using namespace std;
int add(int a,int b){
    int result=a+b;
    return result;
}
int main(){
    int first_number=10;
    int second_number=30;
    cout<<"first number: "<<first_number<<endl;
    cout<<"second number: "<<second_number<<endl;
    int sum=first_number+second_number;
    cout<<"the sum is:"<<sum<<endl;
    cout<<"additon is: "<<add(9,10); 
}