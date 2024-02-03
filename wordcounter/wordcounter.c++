#include <iostream>
#include <fstream>
#include <string>


int main() {
//declaring variables.
std::string filename;
std::string word;
int wordCount = 0;

//User interface.
std::cout << "Wellcome to the hymn word counter!"<<std::endl;
std::cout << "Please enter the name of the hymn, and app will count the number of words: "<<std::endl;
std:: cin >> filename;

//this line reads the file
std::ifstream inputFile(filename); 

//basic error handling with IF statement.
if (!inputFile.is_open()) {
std::cerr << "Error: Unable to open file " << filename << std::endl;
return 1;
    }
//Where the words are counted.
while (inputFile >> word) {
    wordCount++;
}
//Close the file    
inputFile.close();
//the output
std::cout << "Number of words in the hymn: " << wordCount << std::endl;
return 0;
}