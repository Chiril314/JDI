#include <iostream>
#include <cstdlib>
#include <string>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <cpp_file_name>" << std::endl;
        return 1;
    }

    std::string fileName = argv[1];
    std::string executableName = "output_executable";

    // Step 1: Compile the file
    std::string compileCommand = "g++ -std=c++23 " + fileName + " -o " + executableName;
    int compileStatus = system(compileCommand.c_str());

    if (compileStatus != 0) {
        std::cerr << "Compilation failed." << std::endl;
        return 1;
    }

    // Step 2: Run the compiled executable with input redirected from in.txt
    std::string runCommand = "./" + executableName + " < in1.txt";
    int runStatus = system(runCommand.c_str());

    if (runStatus != 0) {
        std::cerr << "Execution failed." << std::endl;
        return 1;
    }

    std::cout << std::endl;

    return 0;
}