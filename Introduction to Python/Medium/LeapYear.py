def is_leap(year):
    leap = False
    
    if(leap%4 == 0.0):
        if(leap%100 == 0.0):
            leap = False
        if(leap%400 == 0.0):
            leap=True
    return leap

year = int(input())
print(is_leap(year))