#ifndef USDS_BASE_TYPE_H
#define USDS_BASE_TYPE_H

#include "base\usdsErrors.h"
#include "base\usdsTypes.h"

namespace usds
{
	class DictionaryBaseType;
	class UsdsBaseType;

	class UsdsBaseType
	{
	public:
		UsdsBaseType();
		~UsdsBaseType();

		void init(DictionaryBaseType* dict_parent, UsdsBaseType* body_parent) throw(...);

		const char* getName() throw(...);
		size_t getNameSize() throw(...);
		int getID() throw(...);
		usdsTypes getType();
		const char* getTypeName();

		UsdsBaseType* getNext() throw (...);
		UsdsBaseType* getPrevious() throw (...);
		UsdsBaseType* getParent() throw (...);

		void setNext(UsdsBaseType* next);
		void setPrevious(UsdsBaseType* previous);
		void setParent(UsdsBaseType* parent);

	protected:

		// it's executed in init()
		virtual void clear() = 0;

		DictionaryBaseType* parentDictionaryObject;

	private:
		UsdsBaseType* parentObject;
		UsdsBaseType* nextObject;
		UsdsBaseType* previousObject;


	};
}

#endif