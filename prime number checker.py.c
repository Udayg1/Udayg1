num= int(input("enter number:"))
for k in range(2,num):
  if num % k==0:
   print(k,"times" ,num//k, "is" ,num)
   break
else:
   print('the number is prime')