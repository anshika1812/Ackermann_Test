let functionCalls=0;

function ackermann(m,n){
    functionCalls++;
    if(m===0){
        return n+1;
    } 
    else if(m>0 && n===0){
        return ackermann(m-1,1);
    } 
    else if(m>0 && n>0){
        return ackermann(m-1,ackermann(m,n-1));
    }
}

let m=1;
let n=1;
for (let i=1;i<=50;i++){
    console.log(`Ackermann[${m},${n}] is ${ackermann(m, n)} ; Function calls: ${functionCalls}`);
    n++;
}

functionCalls=0;
m=n=1;
for(let i=1;i<=50;i++){
    console.log(`Ackermann[${m},${n}] is ${ackermann(m, n)} ; Function calls: ${functionCalls}`);
    m++;
}
