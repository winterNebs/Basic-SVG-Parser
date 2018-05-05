#ifndef SVG_READER
#define SVG_READER
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "xmlTag.h"

class svgReader {
public: 
	svgReader();
	~svgReader();
	void read(std::string file);
private:
	void parse(std::string input);
};
#endif