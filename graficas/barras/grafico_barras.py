import matplotlib.pyplot as plot

x = ['Lineal', 'Binaria', 'ABB', 'Fibonacci', 'Exponencial']
y = [0, 0.2, 0.4, 0.6, 0.8, 1]

plot.bar(x, y)
plot.ylabel('Algoritmos')
plot.xlabel('Tiempo empleado')
plot.title('Comparativa algoritmos de búsqueda')
plot.show()