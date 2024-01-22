#include <iostream>

// Інтерфейс для роботи з друкуючими пристроями
class PrintDevice {
public:
    virtual void print() = 0;
};

// Інтерфейс для сканерів
class Scanner {
public:
    virtual void scan() = 0;
};

// Клас принтера, який реалізує інтерфейс для друкуючих пристроїв
class Printer : public PrintDevice {
public:
    void print() override {
        std::cout << "Printing a document\n";
    }
};

// Клас сканера, який реалізує інтерфейс для сканерів
class ScannerDevice : public Scanner {
public:
    void scan() override {
        std::cout << "Scanning a document\n";
    }
};

// Клас копіювального пристрою, який реалізує обидва інтерфейси
class Copier : public PrintDevice, public Scanner {
public:
    void print() override {
        std::cout << "Copying and printing a document\n";
    }

    void scan() override {
        std::cout << "Copying and scanning a document\n";
    }
};

int main() {
    // Використання класів, що реалізують розділені інтерфейси
    Printer printer;
    ScannerDevice scanner;
    Copier copier;

    printer.print();
    scanner.scan();
    copier.print();
    copier.scan();

    return 0;
}
