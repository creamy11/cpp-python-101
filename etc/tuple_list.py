x = [1,2]
y = (0,2)

print(x)
print(type(x))
print(y)
print(type(y))

x.append(3)
print(x)

import numpy as np

a = np.array(x)
print(a)
print(type(a))
dim = a.shape
print(dim)
print(type(dim))