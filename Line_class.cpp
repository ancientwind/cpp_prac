#include <iostream>

using namespace std;

class Line {

public:
	void setLength( double len );
	double getLength( void );
	Line( double len );
	~Line();

private:
	double length;

};

/**
Line::Line( double len) {
	cout << "Object is being created, length = " << len << endl;
	length = len;
}
**/

Line::Line( double len): length( len ) {
	cout << "Object is being created, length = " << len << endl;
}

Line::~Line( void ) {
	cout << "Object is being deleted" << endl;
}
void Line::setLength( double len) {
	length = len;
}

double Line::getLength() {
	return length;
}

int main() {
	Line line(10.0);

	cout << "current length: " << line.getLength() << endl;

	return -1;
}
