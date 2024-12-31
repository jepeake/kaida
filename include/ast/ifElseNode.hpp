// If Statement

#ifndef ifElseNode_hpp
#define ifElseNode_hpp

#include "astNode.hpp"

class ifElseNode
    :public astNode{
private:
    nodePtr condition;
    nodePtr ifStat;
    nodePtr elseStat;

public:
    ifElseNode(nodePtr _condition, nodePtr _ifStat, nodePtr _elseStat)
        : condition(_condition)
        , ifStat(_ifStat)
        , elseStat(_elseStat)
    {}


    virtual ~ifElseNode()
    {}

    virtual std::string getNodeType() const override{
        return "if_else";
    }

    nodePtr getCondition() const{
        return condition;
    }

    nodePtr getIfStat() const{
        return ifStat;
    }

    nodePtr getElseStat() const{
        return elseStat;
    }

};

#endif
