#ifndef USDS_BODY_JSON_CREATOR_H
#define USDS_BODY_JSON_CREATOR_H

#include "usdsErrors.h"
#include "usdsTypes.h"

#include <string>

namespace usds
{
	class Body;
	class UsdsBaseType;

	class BodyJsonCreator
	{
	public:
		BodyJsonCreator();
		~BodyJsonCreator();

		void generate(usdsEncode encode, std::string* text, Body* body) throw (...);

	private:
		std::string* textBuff;

		void (BodyJsonCreator::*writeIndex[USDS_LAST_TYPE])(UsdsBaseType*);

		void writeBoolean(UsdsBaseType* object) throw (...);
		void writeByte(UsdsBaseType* object) throw (...);
		void writeUByte(UsdsBaseType* object) throw (...);
		void writeShort(UsdsBaseType* object) throw (...);
		void writeUShort(UsdsBaseType* object) throw (...);
		void writeInt(UsdsBaseType* object) throw (...);
		void writeUInt(UsdsBaseType* object) throw (...);
		void writeLong(UsdsBaseType* object) throw (...);
		void writeULong(UsdsBaseType* object) throw (...);
		void writeInt128(UsdsBaseType* object) throw (...);
		void writeUInt128(UsdsBaseType* object) throw (...);
		void writeFloat(UsdsBaseType* object) throw (...);
		void writeDouble(UsdsBaseType* object) throw (...);
		void writeVarint(UsdsBaseType* object) throw (...);
		void writeUVarint(UsdsBaseType* object) throw (...);
		void writeString(UsdsBaseType* object) throw (...);
		void writeArray(UsdsBaseType* object) throw (...);
		void writeStruct(UsdsBaseType* object) throw (...);

		int32_t shiftLevel;

	};

}

#endif
