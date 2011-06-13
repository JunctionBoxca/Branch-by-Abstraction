#ifndef __HASHED_AUTH_H__
#define __HASHED_AUTH_H__

#include <string>
#include <vector>
#include "auth.h"

typedef std::vector<unsigned char> ucvec;

class HashedAuth : public Auth {
	public:
		bool authenticate(std::string username, std::string password);
		ucvec shasum(std::string);
};

#endif//__HASHED_AUTH_H__
