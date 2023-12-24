#This is a Python program that can evaluate if a number entered is a valid account or a valid credit card number. Validation is done by using Luhn's algorithm. The user can input only numbers with length 11, 13, 16 and 19
luhn_number = input("Enter a 11, 13, 16 or 19 digit number: ")
luhnlist_len = len(luhn_number)

while(luhn_number.isalpha() or (luhnlist_len != 11 and luhnlist_len != 13 and luhnlist_len != 16 and luhnlist_len != 19)):
    print("\nThe account/credit card number entered is not of valid length.")
    luhn_number = input("Enter a 11, 13, 16 or 19 digit number: ")
    luhnlist_len = len(luhn_number) 

luhnlist = list(map(int, luhn_number)) 

if(luhnlist_len == 11):
    sum_of_11 = []
    double_of_11 = []
    n1 = 2 * luhnlist[1]
    double_of_11.append(n1)
    sum_of_11.append(luhnlist[0])
    n2 = 2 * luhnlist[3]
    double_of_11.append(n2)
    sum_of_11.append(luhnlist[2])
    n3 = 2 * luhnlist[5]
    double_of_11.append(n3)
    sum_of_11.append(luhnlist[4])
    n4 = 2 * luhnlist[7]
    double_of_11.append(n4)
    sum_of_11.append(luhnlist[6])
    n5 = 2 * luhnlist[9]
    double_of_11.append(n5)
    sum_of_11.append(luhnlist[8])
    for i in double_of_11:
        if(i > 9 ):
            i -= 9
            sum_of_11.append(i)
    for i in double_of_11:
        if(i <= 9):
            sum_of_11.append(i)
    sum_11 = 0
    for i in sum_of_11:
        sum_11 += i
    finalequation = (sum_11 * 9) % 10
    if (luhnlist[-1] == finalequation):
        print("Account/Credi card number is valid")
    else:
        print("Account/Credit card number is invalid")
elif(luhnlist_len == 13):
    sum_of_13 = []
    double_of_13 = []
    n1 = 2 * luhnlist[1]
    double_of_13.append(n1)
    sum_of_13.append(luhnlist[0])
    n2 = 2 * luhnlist[3]
    double_of_13.append(n2)
    sum_of_13.append(luhnlist[2])
    n3 = 2 * luhnlist[5]
    double_of_13.append(n3)
    sum_of_13.append(luhnlist[4])
    n4 = 2 * luhnlist[7]
    double_of_13.append(n4)
    sum_of_13.append(luhnlist[6])
    n5 = 2 * luhnlist[9]
    double_of_13.append(n5)
    sum_of_13.append(luhnlist[8])
    n6 = 2 * luhnlist[11]
    double_of_13.append(n6)
 
    for i in double_of_13:
        if(i > 9 ):
            i -= 9
            sum_of_13.append(i)
    for i in double_of_13:
        if(i <= 9):
            sum_of_13.append(i)
    sum_13 = 0
    for i in sum_of_13:
        sum_13 += i
    finalequation = (sum_13 * 9) % 10
    if luhnlist[-1] == finalequation:
        print("Account/Credi card number is valid")
    else:
        print("Account/Credit card number is invalid")
elif(luhnlist_len == 16):
    sum_of_16 = []
    double_of_16 = []
    n1 = 2 * luhnlist[0]
    double_of_16.append(n1)
    sum_of_16.append(luhnlist[1])
    n2 = 2 * luhnlist[2]
    double_of_16.append(n2)
    sum_of_16.append(luhnlist[3])
    n3 = 2 * luhnlist[4]
    double_of_16.append(n3)
    sum_of_16.append(luhnlist[5])
    n4 = 2 * luhnlist[6]
    double_of_16.append(n4)
    sum_of_16.append(luhnlist[7])
    n5 = 2 * luhnlist[8]
    double_of_16.append(n5)
    sum_of_16.append(luhnlist[9])
    n6 = 2 * luhnlist[10]
    double_of_16.append(n6)
    sum_of_16.append(luhnlist[11])
    n7 = 2 * luhnlist[12]
    double_of_16.append(n7)
    sum_of_16.append(luhnlist[13])
    n8 = 2 * luhnlist[14]
    double_of_16.append(n8)
    
    for i in double_of_16:
        if(i > 9 ):
            i -= 9
            sum_of_16.append(i)
    for i in double_of_16:
        if(i <= 9):
            sum_of_16.append(i)
    sum_16 = 0
    for i in sum_of_16:
        sum_16 += i
    finalequation = (sum_16 * 9) % 10
    if luhnlist[-1] == finalequation:
        print("Account/Credi card number is valid")
    else:
        print("Account/Credit card number is invalid")
elif(luhnlist_len == 19):
    sum_of_19 = []
    double_of_19 = []
    n1 = 2 * luhnlist[1]
    double_of_19.append(n1)
    sum_of_19.append(luhnlist[0])
    n2 = 2 * luhnlist[3]
    double_of_19.append(n2)
    sum_of_19.append(luhnlist[2])
    n3 = 2 * luhnlist[5]
    double_of_19.append(n3)
    sum_of_19.append(luhnlist[4])
    n4 = 2 * luhnlist[7]
    double_of_19.append(n4)
    sum_of_19.append(luhnlist[6])
    n5 = 2 * luhnlist[9]
    double_of_19.append(n5)
    sum_of_19.append(luhnlist[8])
    n6 = 2 * luhnlist[11]
    double_of_19.append(n6)
    sum_of_19.append(luhnlist[10])
    n7 = 2 * luhnlist[13]
    double_of_19.append(n7)
    sum_of_19.append(luhnlist[12])
    n8 = 2 * luhnlist[15]
    double_of_19.append(n8)
    sum_of_19.append(luhnlist[14])
    n9 = 2 * luhnlist[17]
    double_of_19.append(n9)
 
    for i in double_of_19:
         if(i > 9 ):
             i -= 9
             sum_of_19.append(i)
    for i in double_of_19:
        if(i <= 9):
            sum_of_19.append(i)
    sum_19 = 0
    for i in sum_of_19:
        sum_19 += i
    finalequation = (sum_19 * 9) % 10
    if luhnlist[-1] == finalequation:
        print("Account/Credi card number is valid")
    else:
        print("Account/Credit card number is invalid")