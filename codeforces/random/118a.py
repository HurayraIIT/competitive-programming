s = input().lower()

vow = ['a','e','i','o','u','y']
res = ''
for a in vow:
    s = s.replace(a,'')
for i in s:
    res += '.'+i
print(res)
