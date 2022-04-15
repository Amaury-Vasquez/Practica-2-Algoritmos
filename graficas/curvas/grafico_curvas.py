import numpy as np
import matplotlib.pyplot as plt 

from scipy.interpolate import make_interp_spline
 
x = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])
y = np.array([15.75, 28.08, 39.32, 50.28, 61.23, 72.7, 83.21, 91.8, 98.28, 105.22])
 
X_Y_Spline = make_interp_spline(x, y)
 
X_ = np.linspace(x.min(), x.max(), 500)
Y_ = X_Y_Spline(X_)
# x = [1000000, 2000000, 3000000, 4000000, 5000000, 6000000, 7000000, 8000000, 9000000, 10000000]
# y = [0.000300, 0.000306, 0.000295, 0.000304, 0.000322, 0.000324, 0.000318, 0.000324, 0.000327, 0.000396]
plt.plot(X_, Y_)
plt.title("Curva de crecimiento búsqueda lineal")
plt.xlabel("Tamaño de n(millones)")
plt.ylabel("Tiempo (milisegundos)")
plt.show()