import matplotlib.pyplot as math_plot
import numpy as np

def f(x):
    return x ** 2 - 4 * x + 3
    # return x ** 3 - 2 * x ** 2 - 4 * x + 3
    # return 3 * x ** 2 + 6 * x - 3

def df(x):
    return 2 * x - 4
    # return 3 * x ** 2 - 4 * x - 4
    # return 6 * x + 6

def gradient_descent(x0, learning_rate, tolerance):
    x = x0
    gradient = df(x)
    iteration = 0
    x_values = []
    y_values = []

    while abs(gradient) > tolerance:
        x = x - learning_rate * gradient
        gradient = df(x)
        iteration += 1
        x_values.append(x)
        y_values.append(f(x))

    return x, f(x), iteration, x_values, y_values

x0 = 0
learning_rate = 0.1
tolerance = 1e-6

x_min, f_min, iteration, x_values, y_values = gradient_descent(x0, learning_rate, tolerance)

print(f"Minimum value of f(x) found at x = {x_min:.6f} in {iteration} iterations")

x_range = np.linspace(-2, 6, 100)
y_range = f(x_range)
math_plot.plot(x_range, y_range, 'b-', label = 'f(x)')
math_plot.plot(x_values, y_values, 'r*', label = 'Minimum')
math_plot.legend()
math_plot.title('Gradient Descent')
math_plot.xlabel('x')
math_plot.ylabel('f(x)')
math_plot.show()