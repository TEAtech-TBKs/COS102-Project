num = int(input("Enter a number: "))
original_num = num
reverse = 0

while num > 0:
    last_digit =  num % 10
    reverse = reverse * 10 + last_digit
    num = num // 10
if original_num == reverse: 
    print("palindrome")
else: 
    print("This is not a palindrome")
    # to view the solution , open your terminal and type "py Palindrome\Palindrome.py"