num= 79
for i in range(2,num):
  if num % i==0:
   print(i,"times" ,num//i, "is" ,num)
   break
else:
   print('the number is prime')