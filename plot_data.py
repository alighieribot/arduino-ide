import pandas as pd
import matplotlib.pyplot as plt

# dados do arquivo CSV
data = pd.read_csv('data.csv', names=['pressure', 'temp', 'ax', 'ay', 'az', 'gx', 'gy', 'gz'])

# gráfico para a pressão
plt.figure()
plt.plot(data['pressure'])
plt.title('Pressure')
plt.xlabel('Time')
plt.ylabel('Pressure (Pa)')

# gráfico para a temperatura
plt.figure()
plt.plot(data['temp'])
plt.title('Temperature')
plt.xlabel('Time')
plt.ylabel('Temperature (°C)')

# gráfico para a aceleração
plt.figure()
plt.plot(data[['ax', 'ay', 'az']])
plt.title('Acceleration')
plt.xlabel('Time')
plt.ylabel('Acceleration (units)')
plt.legend(['X', 'Y', 'Z'])

# gráfico para o giroscópio
plt.figure()
plt.plot(data[['gx', 'gy', 'gz']])
plt.title('Gyro')
plt.xlabel('Time')
plt.ylabel('Gyro (units)')
plt.legend(['X', 'Y', 'Z'])

plt.show()
