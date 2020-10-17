def solution(x):
    result = ''
    for i in range(len(x)):
        if 97 <= ord(x[i]) <= 122:
            y1 = ord(x[i]) - ord('a')
            y2 = chr(ord('z') - y1)
            result = result + y2
        else:
            result = result + x[i]

    print(result)

