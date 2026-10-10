def oddnumbers(N):
    result = []
    x = 2
    while len(result) < N:
        result.append(x)
        x *= 2
    return result

N = int(input())
a = oddnumbers(N)
print(*a)