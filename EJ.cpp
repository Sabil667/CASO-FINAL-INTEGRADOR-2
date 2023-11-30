#include <iostream>
#include <fstream>
#include <filesystem>

void show_txt_files(const std::string& filename);
int main() {
    std::string filename;

    std::cout << "Ingrese el nombre del archivo (sin extension): ";
    std::cin >> filename;

