#ifndef __SIMPLE_AUTH_H__
#define __SIMPLE_AUTH_H__

#include <string>
#include "auth.h"

class SimpleAuth : public Auth {
	public:
		bool authenticate(std::string username, std::string password);
};

#endif//__SIMPLE_AUTH_H__
