import matplotlib.pyplot as plot

x = ['ABB', 'Binaria', 'Exponencial', 'Fibonacci', 'Lineal']
y = [0.000396, 0.000394, 0.000359, 0.000395, 0.010522]

plot.barh(x, y, color = "#30AADD")
plot.ylabel('Algoritmos')
plot.xlabel('Tiempo empleado (n = 10000000)')
plot.title('Comparativa algoritmos de búsqueda')
plot.show()