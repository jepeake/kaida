// Return Statement

#ifndef returnNode_hpp
#define returnNode_hpp

#include "returnNode.hpp"

class returnNode
    :public astNode{
private:
    nodePtr expr;

public:
    returnNode(nodePtr _expr):
        expr(_expr)
    {}

    virtual ~returnNode(){
    }

    virtual std::string getNodeType() const override{
        return "return";
    }

    nodePtr getExpr() const {
        return expr;
    }
};

#endif
