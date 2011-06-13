#ifndef __AUTHENTICATE_H__
#define __AUTHENTICATE_H__

#include <string>

class Auth {
	public:
		virtual bool authenticate(std::string username, std::string password) = 0;
};

#endif//__AUTHENTICATE_H__
