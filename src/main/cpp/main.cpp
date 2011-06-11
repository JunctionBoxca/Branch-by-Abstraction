#include <iostream>

using namespace std;

int main(int argc, char ** argv) {
	if(argc != 3) {
		cout << "Usage:" << endl;
		cout << argv[0] << " USERNAME PASSWORD" << endl;
		return -1;
	}

	return 0;
}
