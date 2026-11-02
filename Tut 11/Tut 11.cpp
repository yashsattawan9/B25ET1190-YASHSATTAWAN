#include <iostream>
#include <string>

template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
class Box {
private:
    T content;

public:
    Box(T initialContent) : content(initialContent) {}

    void setContent(T newContent) {
        content = newContent;
    }

    T getContent() const {
        return content;
    }

    void display() const {
        std::cout << "Box contains: " << content << std::endl;
    }
};

int main() {
    std::cout << "=== Function Template Demo ===" << std::endl;
    std::cout << "Max of 3 and 7: " << getMax(3, 7) << std::endl;
    std::cout << "Max of 5.5 and 2.1: " << getMax(5.5, 2.1) << std::endl;
    std::cout << "Max of 'A' and 'Z': " << getMax('A', 'Z') << std::endl;
    
    std::cout << "\n=== Class Template Demo ===" << std::endl;

    Box<int> integerBox(100);
    integerBox.display();
    integerBox.setContent(250);
    std::cout << "Updated integerBox value: " << integerBox.getContent() << "\n\n";

    Box<std::string> stringBox("Hello, Templates!");
    stringBox.display();

    return 0;
}
