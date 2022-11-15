

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;
/*
 * 
 */
void printLastLine(std::istream& is, std::ostream& os)  {
std::string line;
std::string previews="";
while (std::getline(is, line)){
if(line.empty() && !previews.empty()){
cout << previews << std::endl;
os << previous << std::endl;
}
 previews = line;
}
 
}
void printAllLine(std::istream& is, std::ostream& os){
    std::string line;
    while (std::getline(is, line)) {
        
        std::cout << line << std::endl;
    }
}

int main(int argc, char** argv) {
    std::ifstream paras(argv[1]);
    std::ofstream parasOut(argv[2]);
    printAllLine(paras, std::cout);
    printLastLine(paras, std::cout);
    return 0;
}
