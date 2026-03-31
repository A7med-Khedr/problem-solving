def string_func(s, x):
    n = len(s)

    if n <= 1 or x == 0:
        return s

    def next_pos(i):
        if i < n // 2:
            return 2 * i + 1
        return 2 * (n - 1 - i)

    res = [''] * n
    visited = bytearray(n)

    for start in range(n):
        if visited[start]:
            continue

        cycle = []
        cur = start

        while not visited[cur]:
            visited[cur] = 1
            cycle.append(cur)
            cur = next_pos(cur)

        m = len(cycle)
        shift = x % m

        for idx, old_index in enumerate(cycle):
            new_index = cycle[(idx + shift) % m]
            res[new_index] = s[old_index]

    return ''.join(res)

print(string_func("string", 5))
print(string_func("Ahmed", 7))
print(string_func("Khedr", 9))
print(string_func("mohamed", 4))
print(string_func("test", 8))
