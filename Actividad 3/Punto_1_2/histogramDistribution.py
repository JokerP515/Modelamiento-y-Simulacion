import matplotlib.pyplot as plt
import os

script_dir = os.path.dirname(os.path.abspath(__file__))
file_path = os.path.join(script_dir, 'sequenceStandard.txt')

with open(file_path, 'r') as file:
    data = [float(line.strip()) for line in file if line.strip()]

# Se definen los intervalos para el histograma (0.0-0.1, 0.1-0.2, ..., 0.9-1.0)
bins = [i * 0.1 for i in range(11)] 

plt.figure(figsize=(10, 6))
plt.hist(data, bins=bins, edgecolor='black', color='skyblue')

plt.xlabel('Value Range')
plt.ylabel('Frequency')
plt.title('Histogram Distribution of Values')
plt.xticks(bins)
plt.grid(axis='y', alpha=0.3)

plt.tight_layout()
plt.show()