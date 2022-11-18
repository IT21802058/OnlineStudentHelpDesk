#include "Response.h"
#include <iostream>
using namespace std;

Response::Response()
{
	description = " ";
}
Response::Response(const char* descript)
{
	description = descript;
}
void Response::setdescription()
{

}
void Response::getdescription()
{

}
Response::~Response()
{
	cout << "destruct is running" << endl;
}
