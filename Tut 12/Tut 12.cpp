#include <iostream>

namespace CompanyA {
    void displayMessage() {
        std::cout << "Hello from Company A's namespace!" << std::endl;
    }
}

namespace CompanyB {
    void displayMessage() {
        std::cout << "Hello from Company B's namespace!" << std::endl;
    }
}

int main() {
    CompanyA::displayMessage();
    CompanyB::displayMessage();

    using namespace CompanyA;
    displayMessage(); 

    return 0;
}
