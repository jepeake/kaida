

#ifndef declarationNode_hpp
#define declarationNode_hpp

#include "astNode.hpp"
#include <string>
#include <iostream>
#include <cmath>

class declarationNode
    : public astNode{
private:
    nodePtr typeSpecifier;
    nodePtr declarator;

public:
    declarationNode(nodePtr _typeSpecifier, nodePtr _declarator)
        : typeSpecifier(_typeSpecifier)
        , declarator(_declarator)
    {}

    virtual ~declarationNode()
    {
        delete typeSpecifier;
        delete declarator;
    }

    nodePtr getType() const
    { return typeSpecifier; }

    nodePtr getDeclarator() const
    { return declarator; }

    virtual std::string getNodeType() const override
    {
        return "declaration";
    }

    };

#endif
