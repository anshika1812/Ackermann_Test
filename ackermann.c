#include<stdio.h>

long long int functioncalls;

int ackermann(int m,int n){
    functioncalls++;
    if(m==0){
        return n+1;
    } 
    else if(m>0 && n==0){
        return ackermann(m-1, 1);
    } 
    else if (m>0 && n>0){
        return ackermann(m-1,ackermann(m,n-1));
    }
}

int main() {
    int m=1,n=1,i;
    for(i=0;i<50;i++){
        printf("Ackermann[%d,%d] is %d ; Function calls: %lld\n",m,n,ackermann(m,n),functioncalls);
        n++;
    }
    functioncalls=0;
    m=n=1;
    for(i=0;i<50;i++){
        printf("Ackermann[%d,%d] is %d ; Function calls: %lld\n",m,n,ackermann(m,n),functioncalls);
        m++;
    }
    return 0;
}
