
def decode(x):
    if len(x) == 0:
        return 1
    elif len(x) == 1:
        return 1 if int(x[0]) != 0 else 0

    else:
        if int(x[0]) == 0 or (int(x[0]) == 0 and int(x[1]) == 0):
            return 0
        elif int(x[0:2]) <= 26:
            return decode(x[1:]) + decode(x[2:])
        else:
            return decode(x[1:])





x = input()
print(decode(x))
