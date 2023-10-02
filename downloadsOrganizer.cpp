#include <iostream>
#include <filesystem>
#include <fstream>




void photoFiles();
void textFile();
void videoFile();

std::string getExtension(std::string file);



int main()
{
    std::cout << getExtension(std::string ("somethingsomething.txt"));

    return 0;
}

std::string getExtension(std::string file){
    
    size_t dotPos = file.find_last_of('.');

    std::string extension = file.substr(dotPos + 1);

    return extension;

}