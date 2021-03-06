#ifndef DALE_FORM_LITERAL_ARRAY
#define DALE_FORM_LITERAL_ARRAY

#include "../../../Units/Units.h"
#include "../../../Node/Node.h"
#include "../../../Type/Type.h"
#include "../../../Function/Function.h"

namespace dale {
/*! Parse an array literal.
 *  @param units The units context.
 *  @param fn The current function.
 *  @param block The current block.
 *  @param node The node containing the array.
 *  @param array_type The type of the array.
 *  @param get_address Whether to return the address of the array.
 *  @param size A pointer for storing the size of the array.
 *  @param pr The parse result for the array.
 *
 *  array_type is not the type of the individual array elements, but
 *  rather the 'parent' array type.  That is, array_type should be set
 *  on array_type.
 */
bool FormLiteralArrayParse(Units *units, Function *fn, llvm::BasicBlock *block,
                           Node *node, Type *array_type, bool get_address,
                           int *size, ParseResult *pr);
}

#endif
