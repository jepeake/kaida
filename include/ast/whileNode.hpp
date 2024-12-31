// While Loop

#ifndef whileNode_hpp
#define whileNode_hpp

#include "astNode.hpp"

class whileNode
    :public astNode{
private:
    nodePtr condition;
    nodePtr stat;

public:
    whileNode(nodePtr _condition, nodePtr _stat)
        : condition(_condition)
        , stat(_stat)
    {}

    virtual ~whileNode()
    {}

    virtual std::string getNodeType() const override{
        return "while";
    }

    nodePtr getCondition() const{
        return condition;
    }

    nodePtr getStat() const{
        return stat;
    }

};

#endif
