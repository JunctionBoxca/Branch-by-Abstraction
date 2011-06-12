#include "auth.h"

using namespace std;

bool Auth::authenticate(string username, string password) {
	return (username == password);
}
