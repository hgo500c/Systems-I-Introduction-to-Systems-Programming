/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

int variable1 = 10;

int vowelCount(const std::string& str);
int sum(const int list[]);
int sumPtr(const int* list);
int sumPtr2(const int* list);
void change(const std::string *list);
void print_map (std::unordered_map<std::string, int> const &m);

int main() {
int i    = 123, j = 20; 
int *ptr = &i;  // ptr points to i 
*ptr = 10;  // Indirection: Changes i to 10 
ptr = &j;  //// Assignment : ptr point to j 

std::cout << &variable1 << std::endl;


std::string str = "test";                                                 
std::string* strPtr = &str;
std::cout << (*strPtr).size() << std::endl;
std::cout << strPtr->size()   << std::endl;
*strPtr = "hello";  // change str to hello 
    


int list[] = {1, 2, 3, -1}; 
int *lp = list; 
*(lp + 2) *= 2;  // list[2] *= 2; // Iterate using pointers 
for (int* i = list; (*i != -1); i++) 
{ 
    std::cout << *i << std::endl;
}


std::cout << sum(list) << std::endl; 
std::cout << sumPtr(list) << std::endl; 
std::cout << sumPtr2(list) << std::endl;


std::string words[] = {"one", "two", "three", ""}; 
change(words);

const std::string Vowels = "AEIOUaeiou";    
    
    using StrIntMap = std::unordered_map<std::string, int>;
    
    const StrIntMap WordNum = {{"one", 1}, {"two", 2}, {"three", 3}};
     print_map(WordNum);
    // Look up entry in hash map	   
    std::string word;	  
    std::cout << "Enter a word: ";	  
    std::cin  >> word;
    auto search = WordNum.find(word);
    
    if (WordNum.find(word) == WordNum.end()) {
        std::cout << "The word " << word << " is not valid.\n";
    }
    else {
       
        std::cout << "The word " << word << "found at position " << search->second << std::endl;
    }
   
    int wcount = 0;   // word count
    int vcount = 0;   // vowel count
    int lcount = 0;   // line count
    int vwcount=0;8    
    std::string line;
    
    std::cout << "Enter line of Text to count how many words and vowels";
/*
    while (std::getline(std::cin, line)){
        lcount++;
    }
    std::cout << "Line count = " << lcount-1 << std::endl;
    
 */
    while (std::cin >> word) {
        
    const std::string V = "aeiouAEIOU";
     if (V.find(word.substr(0,1)) != std::string::npos) {	
                vwcount++;  
     }
        vcount += vowelCount (word);
        
        wcount++;
        
    }
       
   
    std::cout << "Total number of words in the sentence is: ";
    std::cout << wcount << std::endl;
    
    std::cout << "Total number of vowels in the sentence is: ";
    std::cout << vcount << std::endl;
    
     std::cout << "Total number of vowels in first word in the sentence is: ";
     std::cout << vwcount << std::endl;
    
     return 0;
}
void print_map (std::unordered_map<std::string, int> const &m){
   
    for(auto const& pair :m){
        std::cout<<"{"<<pair.first<<": "<<pair.second<<"}\n";
      
    }
}
int vowelCount(const std::string& str) {	
    
    const std::string Vowels = "aeiouAEIOU";
    int vowCount = 0;	 
    for (size_t i = 0; (i < str.size()); i++) {	 
        if (Vowels.find(str[i]) != std::string::npos) {	
                vowCount++;  // Track number of vowels in str
        }
    }	  
    return vowCount;	
}	


int sum(const int list[]) 
{ 
    int sum = 0; 
    for (int i = 0; (list[i] != -1); i++) 
    { 
        sum += list[i];
    } 
    return sum; 
} 	

int sumPtr(const int* list) 
{ 
    int sum = 0; 
    for (const int *i = list; (*i != -1); i++)
    { 
        sum += *i; 
    } 
    return sum;
}

int sumPtr2(const int* list) 
{ 
    int sum; 
    for (sum = 0; (*list != -1); sum += *list, list++) {} 
    return sum;
} 

void change(const std::string *list) 
{ while (*list != "") { 
    std::cout << *list << " (" << list->length() << ")\n"; 
    list++; 
} 
}
 
// End of source code

