
a = 1
b = 1
c = 0
cnt = 2

while(1) :
	c = a+b
	a = b
	b = c
	cnt += 1
	if c>999 :
		print cnt
		return True
