# TEST 4 File Handling Program (Part 1)

## Overview

The **TEST 4 File Handling Program (Part 1)** is a C++ application designed to compute and store the resistance of copper wires based on their length and a given resistivity value. The program allows users to input wire lengths, perform calculations, and save results to a file.

## Features

- **User Input:**
  - Allows users to enter 13 positive copper wire length values with validation.
- **Cross-Sectional Area Calculation:**
  - Calculates the uniform cross-sectional area of the copper wires.
- **Resistance Calculation:**
  - Computes resistance values based on the provided wire lengths.
- **File Handling:**
  - Saves calculated results to `file.txt` in a well-structured tabular format.
- **Error Handling:**
  - Displays error messages for invalid input and file handling issues.

## How to Run the Program

1. **Compile the program:**

   ```bash
   g++ TEST_4_File_Handling_Part1.cpp -o copper_resistance_calculator
   ```

2. **Run the executable:**

   ```bash
   ./copper_resistance_calculator
   ```

3. **Follow the on-screen menu options:**

   - Enter copper wire lengths.
   - Calculate the resistance values.
   - Exit the program.

## Menu Options

1. Enter 13 positive copper wire length values.
2. Calculate and store resistance values in the output file.
3. Exit the program.

## Sample Input/Output

**Example Input:**

```
Enter 13 length values of copper wires:
Copper length value #1: 5
Copper length value #2: 10
...
Copper length value #13: 30
```

**Example Output in file.txt:**

```
-----------------------------------------
Wire length Values       Resistance Values
-----------------------------------------
5                        1.4372e-06
10                       2.8744e-06
...
30                       8.6232e-06
-----------------------------------------
```

## Formula Used

- **Cross-Sectional Area:**
  ```
  Area = π * radius²
  ```
- **Resistance Calculation:**
  ```
  Resistance = (Resistivity * Length) / Area
  ```

## Technologies Used

- C++
- Standard I/O (`iostream`)
- File Handling (`fstream`)
- Mathematical Computations (`math.h`)

## Future Improvements

- Add functionality to process multiple wire batches.
- Introduce graphical representation of resistance values.
- Implement a database to store and retrieve values efficiently.

---

Thank you for using the Copper Wire Resistance Calculator!

