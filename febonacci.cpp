#include <iostream>
using namespace std;
int main(){
    int num, n,first=0,second=1,nextTerm;
    cout<<"enter no. of digit to print:";
    cin>>n;
    if(n<=0){
        cout<<"enter a positive number";
    }
    cout<<"the febonacci series:"<<first<<","<<second<<",";
   for(int i=2;i<n;i++){
        nextTerm=first+second;
        first=second;
        second=nextTerm;  
        cout<< nextTerm<<",";
    }
}