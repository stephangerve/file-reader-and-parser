#include <iostream>
#include <fstream>
#include <sstream>


int main(){

	std::ifstream inFile;
	std::string textfileName = "data.txt";
	std::string currentLine;
	std::string token;
	std::stringstream parser;

	inFile.open(textfileName);
	if(inFile.is_open() == false){
		std::cout << "File doesn't exists";

	}
	else if(inFile.is_open() == true){
		std::cout << "data.txt has been opened." << std::endl;
		while(getline(inFile, currentLine)){
			parser.clear();
			parser.str("");
			parser.str(currentLine);
			getline(parser, token, ',');
			std::cout << "Name: " << token << std::endl;
			getline(parser, token, ',');
			std::cout << "Gender: " << token << std::endl;
			getline(parser, token, ',');
			std::cout << "DOB: " << token << std::endl;
			std::cout << std::endl;			

		}
		


	}
	inFile.close();


}
