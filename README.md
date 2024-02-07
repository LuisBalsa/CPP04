
# C++ Module 04 Project README

## Introduction
This project is part of the C++ Module 04 curriculum at Code 42 school. It focuses on implementing concepts related to subtype polymorphism, abstract classes, and interfaces in C++. The goal is to demonstrate understanding of these concepts through practical exercises and code implementation.

## Subject Overview
The subject requires implementing various classes and interfaces to explore concepts such as subtype polymorphism, abstract classes, and interfaces in C++. The project is divided into several exercises, each focusing on different aspects of these concepts.

### Exercise 00: Polymorphism
Introduces polymorphism by creating base and derived classes (`Animal`, `Dog`, `Cat`) where each derived class overrides a member function to produce specific behavior. Also explores inheritance and dynamic polymorphism.

### Exercise 01: Memory Management
Builds on polymorphism by introducing dynamic memory allocation and deep copying. Involves creating a `Brain` class and managing memory allocation and deallocation in derived classes (`Dog`, `Cat`). Focuses on memory management and deep copying.

### Exercise 02: Abstract Classes
Focuses on abstract classes, making the default `Animal` class abstract to prevent instantiation. Ensures that only derived classes (`Dog`, `Cat`) can be instantiated, emphasizing the concept of abstraction and interface design.

### Exercise 03: Interfaces
Introduces interfaces using pure abstract classes. Involves implementing interfaces for various classes (`AMateria`, `ICharacter`, `IMateriaSource`) to demonstrate polymorphic behavior and dynamic dispatch. Emphasizes interface design and polymorphism. For more detailed information, visit the [ex03 subfolder](https://github.com/LuisBalsa/CPP04/tree/main/ex03).

## Building
To compile the code, use the provided Makefile. Navigate to the exercise directory (`ex00`, `ex01`, etc.) and run `make` command in the terminal.

```
cd ex00
make
```

This will compile the source files and create an executable.

## Running
After compilation, execute the program by running the generated executable. For example:

```
./ex00.out
```

This will run the program and execute the tests defined in the `main()` function.

## Testing
The program includes various test functions to validate the functionality of implemented classes and interfaces. These test functions cover different aspects of the subject requirements and concepts.

