#include "dictionary\dataTypes\dictionaryUVarint.h"

using namespace usds;

DictionaryUVarint::DictionaryUVarint()
{


};

void DictionaryUVarint::clear()
{
	isDefault = false;
};

void DictionaryUVarint::setDefault(long long value)
{
	isDefault = true;
	defaultValue = value;
};