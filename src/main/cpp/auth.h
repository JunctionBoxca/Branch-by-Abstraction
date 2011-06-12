#ifndef __AUTHENTICATE_H__
#define __AUTHENTICATE_H__

#include <string>

class Auth {
	public:
		bool authenticate(std::string username, std::string password);
};

#endif//__AUTHENTICATE_H__
