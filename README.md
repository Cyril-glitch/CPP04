*This project has been created as part of the 42 curriculum by cycolonn.

# 🧠 C++ Module 04 - Object-Oriented Programming

## 📖 1. Description
**CPP04** is the fourth module of the 42 C++ curriculum and focuses on object-oriented programming concepts essential to mastering C++: inheritance, abstraction, polymorphism, memory management, and deep-copy semantics.

This project is divided into three distinct exercises, each progressively introducing a major concept:

- `ex00` introduces the basics of inheritance and virtual methods,
- `ex01` focuses on deep-copy management and dynamic memory allocation,
- `ex02` explores abstract classes and polymorphic object handling.

The overall goal is to understand how classes interact in a hierarchy, how virtual dispatch works, and how to design safe, reusable, and correctly managed C++ code while respecting the strict rules of the 42 curriculum.

---

<br />

## 🚀 2. Instructions

Navigate to any exercise directory (`ex00`, `ex01`, or `ex02`) and use the standard Makefile targets:

| Target | Description |
| :--- | :--- |
| `make` | Compiles the project using `c++` with `-Wall -Wextra -Werror -std=c++98`. |
| `make it` | Compiles and executes the binary immediately[cite: 9]. |
| `make val` | Runs the binary under `valgrind` to verify memory integrity[cite: 9]. |
| `make clean` / `fclean` / `re` | Standard 42 cleaning and recompilation rules[cite: 9]. |

### Executables

Each exercise produces its own binary under the `bin/` directory:

```bash
cd ex00 && ./bin/poly      # ex00: Polymorphism & virtual dispatch
cd ex01 && ./bin/fire      # ex01: Deep copy & Brain allocation
cd ex02 && ./bin/abstract  # ex02: Pure virtual functions & AAnimal
```

### Useful commands

```bash
make
make re
make clean
make fclean
```

---

<br />

## 🛠️ 3. Technical Choices & Learning Objectives
Each exercise was designed to isolate a key concept in modern C++ programming and to encourage good engineering habits.

---

<br />

* 🧠 **Inheritance & Polymorphism**: The first exercise introduces class hierarchies and virtual methods so that derived classes can override the behaviour of their parent class.
* 🧩 **Deep Copy**: In the second exercise, each class manages its own dynamic resources. Copy constructors and assignment operators are implemented carefully to avoid shallow-copy bugs and memory leaks.
* 🏗️ **Abstract Classes**: The third exercise introduces the concept of a pure virtual function through `AAnimal`, creating a base class that cannot be instantiated directly while still allowing polymorphic storage.
* 💾 **Memory Safety**: A strong emphasis is placed on proper resource ownership, deletion logic, and destructor correctness, which are fundamental to safe C++ development.
* ⚙️ **42 Compliance**: The code follows the constraints of the 42 curriculum: C++98 standard, explicit copy management, clean class design, and strict attention to compile flags and code quality.

---

<br />

## 📚 4. Resources
The following references and documentation were used to support the understanding of the core concepts behind this project.

---

<br />

* 📄 **Official Documentation**:
    * [C++ Reference](https://en.cppreference.com/w/) - General reference for C++ syntax, standard library behaviour, and language rules.
    * [42 C++ Modules Documentation](https://harm-smits.github.io/42docs/) - Useful explanations of the C++ module goals and coding standards.
* 🔗 **Concepts & Tutorials**:
    * [C++ Inheritance](https://www.learncpp.com/cpp-tutorial/114-constructors-and-initialization-of-derived-classes/) - Explanation of derived classes and construction order.
    * [Virtual Functions](https://www.learncpp.com/cpp-tutorial/122-virtual-functions/) - Guide to polymorphism and runtime dispatch.
    * [Rule of Three](https://en.cppreference.com/w/cpp/language/rule_of_three) - Essential for correct deep-copy implementation in C++98.
    * [Abstract Classes](https://www.learncpp.com/cpp-tutorial/126-pure-virtual-functions-abstract-base-classes-and-interface-classes/) - Core concept behind `AAnimal` and interface-style design.