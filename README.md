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

## Compile

```bash
g++ -Wall -Wextra data_center_monitor.cpp -o DCM
```

## Run

```bash
./DCM
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

This project helped me apply C++ fundamentals and object-oriented programming concepts to a practical server-monitoring scenario. It strengthened my understanding of classes, objects, encapsulation, constructors, methods, vectors, validation, loops, and Linux-based C++ development.

## Author

Arham Mazhar
