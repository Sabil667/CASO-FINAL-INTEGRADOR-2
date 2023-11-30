#include <iostream>
#include <fstream>
#include <filesystem>

void show_txt_files(const std::string& filename);
int main() {
    std::string filename;

    std::cout << "Ingrese el nombre del archivo (sin extension): ";
    std::cin >> filename;

    show_txt_files(filename);

    return 0;
}
void show_txt_files(const std::string& filename) {
    bool found = false;
    std::string targetFilename = filename + ".txt";  // Agrega la extensión .txt

    try {
        for (const auto& entry : std::filesystem::directory_iterator(".")) {
            if (entry.is_regular_file() && entry.path().filename() == targetFilename) {
                std::cout << "Contenido del archivo " << targetFilename << ":\n";


