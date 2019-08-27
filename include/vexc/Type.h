#pragma once

namespace vexc
{

enum
{
	CHAR, UCHAR, SHORT, USHORT, INT, UINT, LONG, ULONG, LONGLONG, ULONGLONG, ENUM,
	FLOAT, DOUBLE, LONGDOUBLE, POINTER, VOID, UNION, STRUCT, ARRAY, FUNCTION
};

enum { CONST = 0x1, VOLATILE = 0x2 };

struct Type
{
    int categ : 8;
    int qual  : 8;
    int align : 16;
    int size;
};

//#define T(categ) (Types + categ)
#define T(categ) (Types[categ])

Type Unqual(const Type& ty);
Type ArrayOf(int len, Type ty);

char* TypeToString(const Type& ty);

extern Type WCharType;
extern Type Types[VOID - CHAR + 1];

}