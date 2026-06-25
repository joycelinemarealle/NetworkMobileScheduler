# NetworkMobileScheduler

# Starlink Mobile Scheduler Simulator

## Overview

The Starlink Mobile Scheduler Simulator is a C++17 project that models a simplified version of how a mobile satellite network allocates phones to satellites.
I built this project to better understand how network software processes requests. It starts by reading and validating phone requests, then models scheduling decisions under capacity constraints, similar to how a real network planner might work.
The project is designed to strengthen modern C++ fundamentals while simulating the engineering workflow of production networking software. It emphasizes parsing, validation, scheduling, testing, and clean software design.
---

## Goal

Build a simplified simulation of a Starlink Mobile network scheduler.

The simulator models how network software:

* Reads incoming phone requests
* Parses raw input into C++ objects
* Validates data before processing
* Allocates limited satellite resources
* Handles invalid and edge-case inputs
* Produces scheduling decisions
* Follows clean, modular C++ design

---

## Technologies

* C++17
* STL
* File I/O
* Object-Oriented Programming
* Modern C++ memory management
* Linux / Unix development workflow

---

## Project Structure

```
starlink_mobile_sim/
│
├── src/
│   ├── main.cpp
│   ├── Phone.cpp
│   ├── Satellite.cpp
│   ├── Scheduler.cpp
│   └── Validator.cpp
│
├── include/
│   ├── Phone.h
│   ├── Satellite.h
│   ├── Scheduler.h
│   └── Validator.h
│
├── data/
│   ├── phones.txt
│   └── satellites.txt
│
├── tests/
│
├── Makefile
└── README.md
```

---

# Development Stages

## Stage 1 — Phone Parsing (COMPLETED)

### Goal

Convert raw phone request text into strongly typed C++ objects.

Example input:

```
PHONE1 region=us-west priority=3 bandwidth=120
```

Concepts practiced

* File I/O
* std::ifstream
* std::getline
* std::istringstream
* std::string
* std::vector
* Structs
* Parsing
* Type conversion
* Separation of interface and implementation

Output

```
Phone
{
    id = "PHONE1",
    region = "us-west",
    priority = 3,
    bandwidth = 120
}
```

---

## Stage 2 — Input Validation

### Goal

Ensure only valid phone requests enter the scheduling system.

Checks

* Missing fields
* Empty region
* Negative priority
* Invalid bandwidth
* Duplicate phone IDs
* Malformed input
* Invalid numeric values

Concepts practiced

* Defensive programming
* Error handling
* Validation functions
* Clean code
* Edge-case testing

---

## Stage 3 — Satellite Parsing

### Goal

Read satellite information into C++ objects.

Example

```
SAT1 region=us-west capacity=400
SAT2 region=us-east capacity=250
```

Concepts practiced

* Multiple object types
* Parsing additional files
* Resource modeling
* Collections of objects

---

## Stage 4 — Network Scheduling

### Goal

Assign phones to satellites.

Scheduling Rules

* Match phone and satellite region
* Respect satellite capacity
* Prioritize higher-priority phones
* Reject requests when capacity is unavailable

Concepts practiced

* Greedy scheduling
* Sorting
* Resource allocation
* STL algorithms
* Function decomposition

---

## Stage 5 — Failure Simulation

### Goal

Model real-world network failures.

Examples

* Satellite offline
* No satellite available
* Capacity exhausted
* Invalid requests
* Duplicate requests

Concepts practiced

* Robust software
* Failure handling
* Recovery logic
* Defensive engineering

---

## Stage 6 — Testing

### Goal

Verify software correctness.

Test Cases

* Valid input
* Empty files
* Duplicate IDs
* Invalid numbers
* Missing fields
* No satellites
* Capacity overflow
* Offline satellites

Concepts practiced

* Unit testing
* Boundary testing
* Edge cases
* Software verification

---

## Stage 7 — Performance

### Goal

Evaluate scalability.

Experiments

* 10 phones
* 100 phones
* 1,000 phones

Measure

* Execution time
* Memory usage
* Algorithm efficiency

Concepts practiced

* Big-O reasoning
* Efficient STL usage
* Avoiding unnecessary copies
* const correctness
* References vs pointers

---

## Skills Practiced

* Modern C++17
* Object-Oriented Design
* File Parsing
* Data Validation
* STL Containers
* String Processing
* Modular Design
* Scheduling Algorithms
* Testing
* Performance Optimization
* Unix Development Workflow

---

## Long-Term Goal

Develop a production-style C++ project that reflects the type of systems software used in satellite networking and distributed infrastructure, while reinforcing the skills commonly evaluated in modern C++ software engineering interviews.
