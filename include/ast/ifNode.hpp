// If Statement

#ifndef ifNode_hpp
#define ifNode_hpp

#include "astNode.hpp"

class ifNode
    :public astNode{
private:
    nodePtr condition;
    nodePtr stat;

public:
    ifNode(nodePtr _condition, nodePtr _stat)
        : condition(_condition)
        , stat(_stat)
    {}


    virtual ~ifNode()
    {}

    virtual std::string getNodeType() const override{
        return "if";
    }

    nodePtr getCondition() const{
        return condition;
    }

    nodePtr getStat() const{
        return stat;
    }

};

#endif
