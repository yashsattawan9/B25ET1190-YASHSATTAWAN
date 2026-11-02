#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string sourceFileName, destFileName;

    std::cout << "Enter source file name: ";
    std::cin >> sourceFileName;

    std::cout << "Enter destination file name: ";
    std::cin >> destFileName;

    std::ifstream sourceFile(sourceFileName, std::ios::binary);
    if (!sourceFile) {
        std::cout << "Error opening source file!" << std::endl;
        return 1;
    }

    std::ofstream destFile(destFileName, std::ios::binary);
    if (!destFile) {
        std::cout << "Error opening destination file!" << std::endl;
        return 1;
    }

    destFile << sourceFile.rdbuf();

    std::cout << "File copied successfully!" << std::endl;

    sourceFile.close();
    destFile.close();

    return 0;
}
