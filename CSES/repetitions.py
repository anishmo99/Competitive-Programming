str1=input()
max_count=count=1
for i in range(1,len(str1)):
    if(str1[i]==str1[i-1]):
        count+=1
        max_count=max(max_count,count)
    else:
        count=1
print(max_count)