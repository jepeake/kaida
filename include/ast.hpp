#ifndef ast_hpp
#define ast_hpp

#include "ast/astNode.hpp"
#include "ast/arrayNode.hpp"
#include "ast/blockNode.hpp"
#include "ast/declarationNode.hpp"
#include "ast/initdeclaratorNode.hpp"
#include "ast/floatNode.hpp"
#include "ast/funcNode.hpp"
#include "ast/identNode.hpp"
#include "ast/intNode.hpp"
#include "ast/listNode.hpp"
#include "ast/operatorNode.hpp"
#include "ast/typeSpecNode.hpp"
#include "ast/unaryNode.hpp"
#include "ast/listNode.hpp"
#include "ast/returnNode.hpp"
#include "ast/ifNode.hpp"
#include "ast/ifElseNode.hpp"
#include "ast/whileNode.hpp"
#include "ast/forNode.hpp"
#include "ast/enumerateNode.hpp"
#include "ast/switchNode.hpp"
#include "ast/breakNode.hpp"

extern const astNode *parseAST();

#endif
