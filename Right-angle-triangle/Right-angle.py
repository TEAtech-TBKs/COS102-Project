angleA = int(input("Enter First angle: "))
angleB = int(input("Enter Second angle: "))

angleC = 180 - (angleA + angleB)

if angleA == 90 or angleB == 90 or angleC == 90:
    print("Right-angled Triangle")
else:
    print("Not a right-angled triangle")