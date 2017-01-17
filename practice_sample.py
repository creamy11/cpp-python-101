import numpy as np

xy = np.matrix([[0],[0]])

def f(x,y):
	val = np.zeros((2, 1))
	val[0] = 1 - 4 * x + 2 * x ** 2 - 2 * y ** 3
	val[1] = -4 + x ** 4 + 4 * y + 4 * y**4
	return val


def Jf(x,y):
	val = np.zeros((2, 2))
	val[0,0] = -4 + 4 * x
	val[0,1] = -6 * y ** 2
	val[1,0] = 4 * x ** 3
	val[1,1] = 4 + 16 * y ** 3
	return val

print(f(xy[0], xy[1]))
print(Jf(xy[0], xy[1]))

for k in range(0,100):
	fx = f(xy[0], xy[1])
	Jfx = Jf(xy[0], xy[1])
	dx = np.linalg.solve(Jfx, fx)
	xy = xy - dx
	print((k, xy.tolist(), f(xy[0], xy[1]).tolist()))