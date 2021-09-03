#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <ios>
void readAndSaveNetworkNames(){
    std::string baseIP = "host 172.16.0.";

        for(int i = 0; i < 256; i++){
            std::string completeIP = baseIP + std::to_string(i);
            int response = system(completeIP.c_str());
            if(response == 0) {
                std::string command = completeIP + ">>test.txt";
                std::system(command.c_str());
            }
    }
}
void rewriteNetPC(){
    std::ofstream outFile("ipm-laboPC.txt");
    std::ifstream inFile("test.txt");

    if(inFile.is_open() & outFile.is_open()){
        std::cout << "a";
        std::string line;
        while (getline(inFile, line))
        {
            // note that the newline character is not included
            // in the getline() function
            if(line.std::string::find("ipm-") != std::string::npos){
                std::cout << line << std::endl;
                outFile << line << std::endl;
            }
        }
    }else{
        std::cout << "b";
    }
    inFile.close();
}
int main() {
    rewriteNetPC();
    return 0;
}
