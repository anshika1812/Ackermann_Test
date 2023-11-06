#include<iostream>

long long int functionCalls;

int ackermann(int m,int n){
    functionCalls++;
    if(m==0){
        return n+1;
    } else if(m>0 && n==0) {
        return ackermann(m-1,1);
    } else if(m>0 && n>0) {
        return ackermann(m-1,ackermann(m,n-1));
    }
}

int main(){
    int m=1,n=1,i;
    for(i=0;i<50;i++){
        std::cout<<"Ackermann["<<m<<","<<n<<"] is "<<ackermann(m,n)<<" ; Function calls: "<<functionCalls<<std::endl;
        n++;
    }
    functionCalls=0;
    m=n=1;
    for(i=0;i<50;i++){
        std::cout<<"Ackermann["<<m<<","<<n<<"] is "<<ackermann(m,n)<<" ; Function calls: "<<functionCalls<<std::endl;
        m++;
    }
    return 0;
}
