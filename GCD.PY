N,M=list(map(int,input().split(",")))
def hcfnaive(N,M): 
    if(M==0): 
        return N
    else: 
        return hcfnaive(M,N%M) 
print (hcfnaive(N,M)) 
