// CppCardReaderClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CardReaderApplication.h"

using namespace std;

int main(int argc, char* argv[])
{
	CardReaderApplication application(argv, argc);
	int result = application.Run();

	return result;
}
