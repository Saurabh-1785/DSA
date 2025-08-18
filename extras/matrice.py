# Input matrix sizes
r1 = int(input("Enter rows for Matrix 1: "))
c1 = int(input("Enter columns for Matrix 1: "))

r2 = int(input("Enter rows for Matrix 2: "))
c2 = int(input("Enter columns for Matrix 2: "))

# Input Matrix 1
print("Enter elements for Matrix 1:")
matrix1 = []
for i in range(r1):
  row = []
  for j in range(c1):
    val = int(input(f"Enter element at [{i}][{j}]: "))

    row.append(val)
  matrix1.append(row)

# Input Matrix 2
print("Enter elements for Matrix 2:")
matrix2 = []
for i in range(r2):
  row = []
  for j in range(c2):
    val = int(input(f"Enter element at [{i}][{j}]: "))
    row.append(val)
  matrix2.append(row)

# --- Addition ---
if r1 == r2 and c1 == c2:
  print("\nAddition Result:")
  for i in range(r1):
    for j in range(c1):
      print(matrix1[i][j] + matrix2[i][j], end=" ")
    print()
else:
  print("\nAddition not possible (different sizes)")

# --- Subtraction ---
if r1 == r2 and c1 == c2:
  print("\nSubtraction Result:")
  for i in range(r1):
    for j in range(c1):
      print(matrix1[i][j] - matrix2[i][j], end=" ")
    print()
else:
  print("\nSubtraction not possible (different sizes)")

# --- Multiplication ---
if c1 == r2:
  print("\nMultiplication Result:")
  for i in range(r1):
    for j in range(c2):
      val = 0
      for k in range(c1):
        val += matrix1[i][k] * matrix2[k][j]
      print(val, end=" ")
    print()
else:
  print("\nMultiplication not possible (Matrix1 columns != Matrix2 rows)")
