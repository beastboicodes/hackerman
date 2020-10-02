// funcop.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

int f( int q) {
	cout << "this is f()" << endl;
	return q;
}

int main( int argc, char ** argv ) {
	int n;
	n = f(47);
	printf("n is %d\n", n);
	return 0;
}
