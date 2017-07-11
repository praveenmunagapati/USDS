#include "converters\usdsDictionaryTextParser.h"
#include "flexDictionaryTextScanner.h"

#include "dictionary\usdsDictionary.h"

#include <sstream>


using namespace usds;

void DictionaryTextParser::parse(const char* text_dict, usdsEncodes encode, Dictionary* dict) throw (...)
try
{
	if (encode != USDS_UTF8)
		throw ErrorMessage(DICTIONARY_TEXT_PARSER__UNSUPPORTABLE_ENCODE, "Unsupportable encode for text dictionary: ") << encode;

	// Creating scanner and parser
	std::stringstream input;
	std::stringstream output;
	input << text_dict;
	FlexDictionaryTextScanner scanner(&input, &output);
	
	BisonDictionaryTextParser textParser(text_dict, dict, &scanner, 0, 0);
	// Parse!
	textParser.parse();
}
catch (ErrorMessage& msg)
{
	throw ErrorStack("DictionaryTextParser::parse") << (void*)text_dict << encode << (void*)dict << msg;
}
catch (ErrorStack& err)
{
	err.addLevel("DictionaryTextParser::parse") << (void*)text_dict << encode << (void*)dict;
	throw;
}