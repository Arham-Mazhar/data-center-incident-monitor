# Data Center Incident Monitoring System

## Overview

The Data Center Incident Monitoring System is a C++ console application that monitors CPU and RAM usage across multiple servers.

The program accepts server information from the user, validates CPU and RAM usage, determines the health status of each server, and generates an incident summary.

## Features

- Monitor multiple servers
- Accept server name, CPU usage, and RAM usage
- Validate CPU and RAM values between 0% and 100%
- Classify servers based on resource usage
- Detect invalid server readings
- Display information for each server
- Generate an incident summary
- Count servers that require attention

## Server Status Rules

- **Healthy:** CPU and RAM are both 60% or below
- **Moderate:** CPU and RAM are both 80% or below
- **High Usage:** Valid CPU or RAM usage exceeds 80%
- **Invalid:** CPU or RAM is outside the 0–100% range

High Usage and Invalid servers are considered to require attention.

## C++ Concepts Used

- Variables and data types
- Conditional statements
- Logical operators
- Functions and methods
- Loops
- Classes and objects
- Encapsulation
- Constructors
- Setters
- Input validation
- Boolean values
- Vectors
- `vector<Server>`
- `push_back()`

## Technologies

- C++
- Linux (Ubuntu)
- GNU g++ Compiler
- Git
- GitHub
- Python
- Pytest

## Compile

```bash
g++ -Wall -Wextra data_center_monitor.cpp -o DCM
```

## Run

```bash
./DCM
```
## Automated Testing

Automated tests are implemented with Python and Pytest to validate the C++ application.

The test suite:
- Executes the compiled C++ application using Python `subprocess`
- Automatically supplies server input to the application
- Captures the C++ program output
- Compares actual output with expected results using assertions
- Uses Pytest parameterization to test multiple scenarios with one test function
- Tests Healthy, Moderate, High Usage, and Invalid server conditions
- Includes boundary and invalid-input test cases
- Verifies whether a server requires attention

### Run Tests

```bash
python3 -m pytest test_dcm.py
```
## Example Output

```text
Server: Web_Server
CPU: 45%
RAM: 52%
Status: Healthy

Server: Database_Server
CPU: 72%
RAM: 68%
Status: Moderate

Server: Backup_Server
CPU: 91%
RAM: 87%
Status: High

Server: Broken_Server
Status: Invalid

========== INCIDENT SUMMARY ==========

Total Servers: 4
Healthy: 1
Moderate: 1
High: 1
Invalid: 1
Attention Required: 2
```

## Learning Outcome

This project helped me apply C++ fundamentals and object-oriented 
programming concepts to a practical server-monitoring scenario. It 
strengthened my understanding of classes, objects, encapsulation, 
constructors, methods,vectors, validation, loops, and Linux-based C++ 
development.
I also extended the project with Python and Pytest automated testing, using
subprocess execution, parameterized test cases, captured program output,
assertions, and boundary testing to validate the C++ application.

## Author

Arham Mazhar
