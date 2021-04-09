#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <regex>
using namespace std;

using namespace std;
int main(int argc, char *argv[]) {

   string projDir = argv[1];
   string filePath = argv[2];
   int fileLineNum = atoi(argv[3]);
    string item_name;
    ifstream nameFileout;
    nameFileout.open(filePath);
    string line;
    int lineNum = 0;
    while(lineNum++ != fileLineNum && std::getline(nameFileout, line)){}

    const std::regex base_regex(".*@see project://(.+)");
    std::smatch pieces_match;
    if (lineNum - 1 == fileLineNum) {
        
        if (std::regex_match(line,pieces_match, base_regex)) {
            std::string command = "phpstorm " + projDir + '/' + pieces_match[1].str();
            std::cout << command << '\n';

            std::system(command.c_str());
        }
    } else {
        cout << "NOT!" << endl;
        return 1;        
    }

   return 0;
}
