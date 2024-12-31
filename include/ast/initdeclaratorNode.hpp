// Declarator
#ifndef initdeclaratorNode_hpp
#define initdeclaratorNode_hpp

#include "astNode.hpp"

// Declarator + Initializer
class initializedDeclaratorNode
    : public astNode
{
    private:
        nodePtr declarator;
        nodePtr initializevalue;

    public:
        initializedDeclaratorNode(nodePtr _declarator, nodePtr _initializer):
            declarator(_declarator),
            initializevalue(_initializer)
        {}

    virtual ~initializedDeclaratorNode()
    {
        delete declarator;
        delete initializevalue;
    }

    nodePtr getDeclarator() const
    { return declarator; }

    nodePtr getInitializeValue() const
    { return initializevalue; }

    virtual std::string getNodeType() const override{
        return "initializeDeclarator";
    }

};

#endif
