def intprog(n, a, d):
    result = [a]
    i = 1
    while i < n:
        result.append(result[i-1] + d)
        i = i + 1
    return result

n = int(input())
a = int(input())
d = int(input())
pro = intprog(n, a, d)
print(*pro)
