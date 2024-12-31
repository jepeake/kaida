// Float

#ifndef floatNode_hpp
#define floatNode_hpp

#include "astNode.hpp"

class floatNode
    :public astNode{
private:
    double val;

public:
    floatNode(double _val):
        val(_val)
    {}

    virtual ~floatNode()
    {}

    virtual std::string getNodeType() const override{
        return "float";
    }

    virtual float getFloat() const{
        return val;
    }

};

#endif
