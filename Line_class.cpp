#include <iostream>

using namespace std;

class Line {

public:
	static int objCount;
	void setLength( double len );
	double getLength( void );
	static int getCount();
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

int Line::getCount() {
	return objCount;
}

Line::Line( double len): length( len ) {
	cout << "Object is being created, length = " << len << endl;
	objCount++;
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

int Line::objCount = 0;

int main() {
	Line line(10.0);
	Line *ptrLine;

	ptrLine = &line;

	cout << "current length: " << line.getLength() << endl;

	cout << "from ptr " << ptrLine->getLength() << endl;

	Line line2(2);
	line2.setLength(28);

	ptrLine = &line2;
	cout << "from ptr " << ptrLine->getLength() << endl;

	cout << "should be 2 instance: " << (ptrLine->objCount == 2) << endl;

	return -1;
}
