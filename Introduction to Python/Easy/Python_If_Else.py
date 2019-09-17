usr_num = int(input().strip())
if usr_num%2==1:
    print("Weird")
elif usr_num>=2 and usr_num<=5 and usr_num%2==0:
    print("Not Weird")
elif usr_num>=6 and usr_num<=20 and usr_num%2==0:
    print("Weird")
elif usr_num>20 and usr_num % 2==0:
    print("Not Weird")
