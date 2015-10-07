#ifndef USDS_TYPES
#define USDS_TYPES

namespace usds
{
	enum usdsTypes
	{
		USDS_NO_TYPE = 0,
		USDS_BOOLEAN = 1,
		USDS_BYTE = 2,
		USDS_UNSIGNED_BYTE = 3,
		USDS_SHORT = 4,
		USDS_UNSIGNED_SHORT = 5,
		USDS_BIGENDIAN_SHORT = 6,
		USDS_BIGENDIAN_UNSIGNED_SHORT = 7,
		USDS_INT = 8,
		USDS_UNSIGNED_INT = 9,
		USDS_BIGENDIAN_INT = 10,
		USDS_BIGENDIAN_UNSIGNED_INT = 11,
		USDS_LONG = 12,
		USDS_UNSIGNED_LONG = 13,
		USDS_BIGENDIAN_LONG = 14,
		USDS_BIGENDIAN_UNSIGNED_LONG = 15,
		USDS_INT128 = 16,
		USDS_UNSIGNED_INT128 = 17,
		USDS_BIGENDIAN_INT128 = 18,
		USDS_BIGENDIAN_UNSIGNED_INT128 = 19,
		USDS_FLOAT = 20,
		USDS_BIGENDIAN_FLOAT = 21,
		USDS_DOUBLE = 22,
		USDS_USDS_BIGENDIAN_DOUBLE = 23,
		USDS_VARINT = 24,
		USDS_UNSIGNED_VARINT = 25,
		USDS_STRING = 26,
		USDS_ARRAY = 27,
		USDS_LIST = 28,
		USDS_MAP = 29,
		USDS_POLYMORPH = 30,
		USDS_STRUCT = 31,
		USDS_TAG = 32
	};

	enum usdsEncodes
	{
		USDS_NO_ENCODE = 0,
		USDS_UTF8 = 2,
		USDS_UTF16 = 3,
		USDS_UTF32 = 4,
		USDS_UTF7 = 5,

	};

	extern const char* typeName(usdsTypes code);
	extern const char* encodeName(usdsEncodes code);

	enum usdsSignature
	{
		USDS_DICTIONARY_SIGNATURE = 'D',
		USDS_TAG_SIGNATURE = 't',
		USDS_FIELD_SIGNATURE = 'f',
		USDS_TAG_RESTRICTION_SIGNATURE = 'R',
		USDS_TAG_RESTRICTION_ROOT_SIGNATURE = 'r', // == root if false
		USDS_BODY_SIGNATURE = 'B'

	};


};


#endif