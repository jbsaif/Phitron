# print('Give me some money')
# input()

# input('Give me some money: ')

# money = input("Give me some money: ")
# print('Amake diche ', money, ' taka')
# print('Amake diche '+ money+ ' taka')

first_money = input('KodomAli, dosto kichu tk de: ')
second_money = input('Peyara Begum, dosto kichu tk de: ')



# total = first_money + second_money

# print('Total money I got is : ', total)
# print(type(first_money)) #Default input is String Type

# SO we need to type cast the input data type to intor float

first_money_int = int(first_money) #type casting to int
second_money_int = int(second_money) #type casting to int

total = first_money_int + second_money_int

print('Total money I got is : ', total)
print(type(first_money_int))


num = 42
text = str(num)

num = 10
float_val = float(num)

print(float_val)