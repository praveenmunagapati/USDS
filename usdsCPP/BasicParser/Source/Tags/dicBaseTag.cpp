#include "tags\dicBaseTag.h"

using namespace usds;

DicBaseTag::DicBaseTag()
{
	
};

void DicBaseTag::init(Dictionary* dict, bool root, int id, const char* name, size_t name_size) throw(...)
{
	nextTag = 0;
	previousTag = 0;
	clear();

	dictionary = dict;

	if (name_size == 0)
		tagName = name;
	else
		tagName.assign(name, name_size);
	tagID = id;
	isRoot = root;
};

DicBaseTag* DicBaseTag::getNextTag() throw(...)
{
	return nextTag;
};

DicBaseTag* DicBaseTag::getPreviousTag() throw(...)
{
	return previousTag;

};

void DicBaseTag::setNextTag(DicBaseTag* next)
{
	nextTag = next;

};
void DicBaseTag::setPreviousTag(DicBaseTag* previous)
{
	previousTag = previous;
};

const char* DicBaseTag::getName() throw(...)
{
	return tagName.c_str();
};

size_t DicBaseTag::getNameSize() throw(...)
{

	return tagName.size();
};

int DicBaseTag::getID() throw(...)
{
	return tagID;

};
