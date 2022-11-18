#pragma once
#include "Feedback.h"
#define SIZE 10
class Response
{
private:
	const char* description;
  Feedback *feedback; // bi directional association
  Issue* issues;

public:
	Response();
	Response(const char* descript);
	void setdescription();
	void getdescription();
	~Response();	
};

