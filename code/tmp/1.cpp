void FWT(ll *f, int op) {
    for(int len=2; len<=up; len<<=1) {
        for(int l=0, hf=len>>1; l<up; l+=len) {
            for(int i=l; i<l+hf; ++i) {
                ll x=f[i], y=f[i+hf];
                if(op>0) {
                    if(op==1) f[i]=(x+y)%mod, f[i+hf]=(x-y+mod)%mod; //xor
                    else if(op==2) f[i]=(x+y)%mod; //and
                    else f[i+hf]=(x+y)%mod; //or
                }
                else {
                    if(op==-1) f[i]=(x+y)*inv2%mod, f[i+hf]=(x-y+mod)*inv2%mod; //xor
                    else if(op==-2) f[i]=(x-y+mod)%mod; //and
                    else f[i+hf]=(y-x+mod)%mod; //or
                }
            }
        }
    }
}