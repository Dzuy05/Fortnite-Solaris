import time
start = time.time()
for i in range(1000):
	print("Hello World")
end = time.time()
print("The time of execution of above program is :", (end-start) * 10, "s")
