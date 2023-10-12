#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

  // Read from the text file
  ifstream inputFile("input.txt");
  if(!inputFile)
  {
      cout<<"failed to Open input file";
      return 1;
  }
  ofstream outputFile("output.txt");
  if(!outputFile){
    cout<<"Failed to open output file.";
    return 1;
  }

  string line;
  while(getline(inputFile,line)){
    string operators;
    for(char c:line)
    {
        if(c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
            operators +=c;
    }
    outputFile<<operators;
    cout<<operators;
  }

}
