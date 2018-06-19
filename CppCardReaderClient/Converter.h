#pragma once
class Converter
{
public:
	Converter();
	~Converter();

	//Converts a string to a bool.
	bool ToBool(const std::wstring& stringToConvert);
	//Converts a string to a bool.
	bool ToBool(const std::string& stringToConvert);
	//Convert a wide string to a string using ANSI format.
	std::string ToString(const std::wstring& wstringToConvert);
	//Convert a string to a wide string using ANSI format.
	std::wstring ToWString(const std::string& stringToConvert);
	//Converts a float to a wide string.
	std::wstring ToWString(const float& floatToConvert, int numberOfDecimals = 5);
};

