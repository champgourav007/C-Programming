ran = input()
cou = 1
for i in range(int(ran)):
    if cou%3==0 and cou%5==0:
        print("FizzBuzz")
    elif cou%3==0:
        print("Fizz")
    elif cou%5==0:
        print("Buzz")

    else:
        print(cou)
    cou+=1 