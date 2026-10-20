def oddnumbers(n):
    result = []
    i = 0
    while(i < n):
        result.append(2 * i + 1)
        i = i + 1
    return result

N = int(input())
a = oddnumbers(N)

print(*a)
