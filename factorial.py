# # def factorial(n):
# #     fact=1
# #     for i in range (1,n+1):
# #         fact=fact*i
# #     return fact

# # num=int(input("enter the number "))
# # r=factorial(num)
# # print(r)

# #wap to print length of a list   using functions 

# def length(l):
# return len(l)

# l=list(map(int,input))
# wap to find out factors of a num

num = int(input("Enter the number: "))

for i in range(1, num//2 + 1):
    if num % i == 0:
        print(i)

print(num)   

#waf digits that input num and return product of digits of that num
