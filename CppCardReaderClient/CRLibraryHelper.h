#pragma once
class CRLibraryHelper
{
public:
	CRLibraryHelper();
	~CRLibraryHelper();

	//See the CardReaderLibrary.h file for more details.

	//Method reading the card image files.
	std::string ReadCardTitles(std::string input);
	//Method comparing two card names.
	bool CompareCardNames(std::string cardName1, std::string cardName2);
	//Method giving how many card images that could be handled in a single run.
	int GetMaxCardAmount();
	//Method giving an example of how the card reading method might return.
	std::string GetResultExample();

	//The maximum amount of characters the output of a method could have.
	const int MAX_RESULT_LENGTH = 5000;
};

