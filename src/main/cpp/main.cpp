#include <iostream>
#include "hashed_auth.h"

using namespace std;

Auth * getAuthImpl() {
	return new SimpleAuth();
}

int main(int argc, char ** argv) {
	int rc = 0;
	if(argc != 4 && argc != 3) {
		cout << "Usage:" << endl << endl;
		cout << " " << argv[0] << " USERNAME PASSWORD" << endl << endl;

		return -1;
	}

	Auth * auth = getAuthImpl();

	if(!auth->authenticate(argv[1], argv[2])) {
		cerr << "Invalid Credentials" << endl;
		rc = -1;
	}

	delete auth;

	return rc;
}
