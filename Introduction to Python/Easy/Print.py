if __name__ == '__main__':
    n = int(input())
    x=1
    total=0
    while(x<=n):
        if(n<10):
            total+=(x*(10**((n-x))))
            x+=1
        elif(n>=10 and n<100):
            if(x<10):
                total+=(x*(10**((n-x))))
                x+=1
                print(total)
            if(x>=10 and x<100):
                total+=(x*(100**((n-x))))
                x+=1
                print(total)
    print(int(total))
    print(10*(100**0))