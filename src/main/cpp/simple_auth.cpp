#include "simple_auth.h"

using namespace std;

bool SimpleAuth::authenticate(string username, string password) {
	return (username == password);
}
