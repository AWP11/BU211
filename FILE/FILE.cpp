#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
    string filename = "201 RAW.txt";
    string outputFilename = "201.dhcpd";

    ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open input file: " << filename << endl;
        return 1;
    }

    string content;
    getline(inputFile, content, '\0');
    
    inputFile.close();

    string newContent = "dhcpd_" + content;

    ofstream outputFile(outputFilename);
    if (!outputFile.is_open()) {
        cerr << "Error: Unable to open output file: " << outputFilename << endl;
        return 1;
    }
    system("pause");
    outputFile << newContent;
    outputFile.close();

    return 0;
}