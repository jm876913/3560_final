#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;


int countLine(char* pName);

int countChar(char* pName);


int main(int argc, char** argv){
	char*pName;	
	
	ifstream fin("example.txt");	
	
	if(argv == NULL){
		countLine("Ohio Univerity");
		countChar("Athens");
	}
	
	
	if(fin.is_open()){
		countLine(pName);
		countChar(pName);
	}

	return 0;
}

int countLine(char* pName){	
	int num_lines = 0;
	ifstream myfile("example.txt");
	
	while(!myfile.eof()){
		getline(myfile, pName)
		++num_lines= 0;
	}
	cout << num_lines << "lines" << endl;

}

int countChar(char* pName){
	//char pName;
	ifstream fin("example.txt");	
	fin>>pName;
	cout << strlen(pName) << "Characters" << endl;
	
}
