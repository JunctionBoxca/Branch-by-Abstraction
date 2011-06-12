#include <iostream>
#include "auth.h"

using namespace std;

int main(int argc, char ** argv) {
	int rc = 0;
	if(argc != 3) {
		cout << "Usage:" << endl << endl;
		cout << " " << argv[0] << " USERNAME PASSWORD" << endl << endl;

		return -1;
	}

	Auth * auth = new Auth();

	if(!auth->authenticate(argv[1], argv[2])) {
		cerr << "Invalid Credentials" << endl;
		rc = -1;
	}

	delete auth;

	return rc;
}
