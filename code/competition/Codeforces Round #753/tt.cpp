

semaphore beginempty;
semaphore full;
semaphore S;
empty  = 10;
full = 0;
S  = 1;
Pin =0;
Pout =0;
void in(){
    while(1){ 
        生产了一台设备;
        P(empty);
        P(S); 
        使用运输工具入库 
        v(S)
        V(full);
    }
}
void out(){ 
    while(1){ 
        P(full);
        P(S);
        使用运输工具出库;
        v(S);
        V(empty);
        提出设备供应客户;
    }
}

​