#include <cstring>
#include <sstream>
#include <iostream>
#include <vector>
#include <openssl/sha.h>
#include <iterator>
#include "hashed_auth.h"

using namespace std;

bool HashedAuth::authenticate(string username, string password) {
	// stored_hash == password
	ucvec stored_hash = ucvec(shasum("password"));
	ucvec password_hash = ucvec(shasum(password));
	
	return (username == "admin" && equal(stored_hash.begin(), stored_hash.end(), password_hash.begin()));
}

ucvec HashedAuth::shasum(string s) {
	stringstream sum;
	ucvec ibuf(s.begin(), s.end());
	ucvec obuf(SHA256_DIGEST_LENGTH, '\0');

	SHA256(&ibuf[0], ibuf.size(), &obuf[0]);

	return obuf;
}
