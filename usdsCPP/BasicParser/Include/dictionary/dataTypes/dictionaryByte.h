#ifndef DICTIONARY_BYTE_H
#define DICTIONARY_BYTE_H

#include "usdsTypes.h"
#include "usdsErrors.h"

#include "dictionary\dictionaryBaseType.h"

namespace usds
{
	class DictionaryByte : public DictionaryBaseType
	{
	public:
		DictionaryByte(Dictionary* dict);
		virtual ~DictionaryByte() {  };

		void finalize() throw (...) { };

		usdsTypes getType() { return USDS_BYTE; };
		const char* getTypeName() { return "BYTE"; };

	private:
		void additionalInitType();


	};
};

#endif