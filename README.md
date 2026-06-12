💰 Payroll Management System (C++ OOP)

📖 Overview

This project is a simple Payroll Management System developed in C++ using Object-Oriented Programming principles. It calculates the weekly salary of multiple employees based on their hourly rate and hours worked, while also applying input validation to ensure accurate data entry.

---

✨ Features

- Calculates weekly pay for 7 employees
- Uses a class-based OOP approach
- Input validation for:
  - Hourly rate (cannot be negative)
  - Hours worked (must be between 0 and 60)
- Computes total pay using rate × hours formula
- Displays formatted payroll summary

---

🏗️ Class Details

Class: "Payroll"

Private Data Members

- "hourlyRate" → Stores employee hourly wage
- "hoursWorked" → Stores number of hours worked
- "totalPay" → Stores calculated salary

Public Member Functions

- "setRate(double r)" → Sets hourly rate
- "setHours(double h)" → Sets hours worked
- "calculatePay()" → Computes total salary
- "getPay()" → Returns calculated pay

---

🔁 Program Flow

1. User enters hourly pay rate
2. Program validates the rate
3. For each of the 7 employees:
   - Input hours worked
   - Validate hours (0–60 range)
   - Calculate pay
4. Display final payroll report

---

▶️ Sample Output

Enter hourly pay rate: 20
Enter hours worked by employee 1: 40
Enter hours worked by employee 2: 35
...
==============================
       Weekly Gross Pay       
==============================
Employee 1 Pay: $800
Employee 2 Pay: $700
...

---

💻 How to Compile and Run

Using g++

g++ payroll.cpp -o payroll
./payroll

Using IDE

You can run this program in:

- Code::Blocks
- Dev-C++
- Visual Studio
- CLion
- Eclipse CDT

---

🎯 Learning Objectives

This project helps beginners understand:

- Classes and objects in C++
- Encapsulation
- Arrays of objects
- Input validation techniques
- Real-world payroll calculation logic

---

📜 License

This project is open-source and intended for educational purposes.
