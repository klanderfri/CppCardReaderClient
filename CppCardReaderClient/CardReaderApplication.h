#pragma once
#include "Toolbox.h"
#include "ApplicationMessages.h"
#include "Card.h"
#include "TimePoint.h"
//Class holding the card reader application.
class CardReaderApplication
{
public:
	CardReaderApplication(char* runArguments[], int numberOfRunArguments);
	~CardReaderApplication();

	//Runs the card reader application.
	int Run();

private:

	//Reads the card titles of all the specified image files.
	std::vector<Card> readAllCards(std::vector<std::wstring> filepathsOfImages);
	//Extracts the card data from the reading result string.
	std::vector<Card> extractCardData(std::string readDataOutput);
	//Creates the input string parameter for the card reading method.
	std::string createReadingParameter(std::vector<std::wstring> filepathsOfImages);
	//Removes lingering old data from previous runs.
	void removeOldData();
	//Fetches the file paths of the MtG image files.
	std::vector<std::wstring> getMtgImageFilePaths();
	//Resizes the command window to occupy as little space as possible without creating line breakes in its' output texts. 
	void reziseCommandWindow(size_t numberOfFiles, int lengthOfLongestFilename);

	//Object holding methods printing messages for the application.
	ApplicationMessages* messages;
	//Pointer to object holding useful methods.
	Toolbox* toolbox;
};

