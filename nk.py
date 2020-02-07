n,k=map(int,input().split(" "))
count=-1
v=list(map(int,input().split(" ")))[:n]
for i in range(n) :
  if v[i]==k :
    count+=1
if count>-1 :
   print(count)
else :
   print(-1)
