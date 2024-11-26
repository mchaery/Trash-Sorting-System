# Trash-Sorting-System
**Overview**

This project implements a trash sorting system that categorizes and disposes of waste into different types: Recyclable, Organic, and Landfill. The program is designed to read data from a file (trash.txt), collect various types of trash, print the status of the collected trash, and then dispose of them with specific disposal instructions.

**How It Works**

The program first opens the file trash.txt and reads the trash data.
It then categorizes the trash into one of the three categories (Recyclable, Organic, Landfill).
After all trash is collected, it displays the current status, showing the trash items and their weights.
The program then disposes of the trash, displaying specific disposal instructions for each item based on its type.
Finally, the trash objects are deleted to release memory.


**Features**

**Trash Sorting**: The program categorizes trash into three main categories: recyclable, organic, and landfill waste. Each category has specific disposal instructions.

**File Input**: The trash items are read from a text file (trash.txt), which specifies the type, name, and weight of each item. The file format is as follows:

Trash <Type> <Name> <Weight>
Example:
Trash Plastic Bottle 0.5
Trash Paper Newspaper 1.2

**Status Reporting**: The program can display the status of all collected trash, listing their names and weights.

**Disposal Instructions**: Once all trash items are collected, the program will dispose of them according to their type, with disposal instructions such as "Please rinse me and place me in the glass bin."


**Files**

Trash.h: Header file containing the class declarations.

Trash.cpp: Implementation of the Trash and derived classes (Recyclable, Organic, Landfill, etc.) with the dispose method that outputs disposal instructions.

main.cpp: Main program file that handles reading from the input file, sorting trash, printing the status, and disposing of the trash.

trash.txt: Example input file that contains trash data. 


**Compilation**

To compile the program, use the following command:

g++ -c Trash.cpp -o Trash.o       # Compile Trash.cpp
g++ -c main.cpp -o main.o         # Compile main.cpp
g++ Trash.o main.o -o trashSorter # Link object files to create executable

**Running**

To run the program:

./trashSorter


**Example Output**

The program will output something similar to this:
<img width="872" alt="image" src="https://github.com/user-attachments/assets/d7dd27cc-7ec8-4637-9fe9-16986c2b9be0">

