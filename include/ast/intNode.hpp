// Integer

#ifndef intNode_hpp
#define intNode_hpp

#include "astNode.hpp"

class intNode
    :public astNode{
private:
    int val;

public:
    intNode(int _val):
        val(_val)
    {}

    virtual ~intNode()
    {}

    virtual std::string getNodeType() const override{
        return "int";
    }

    virtual int getInt() const{
        return val;
    }

};

#endif
