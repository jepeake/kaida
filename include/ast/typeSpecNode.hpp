// Type Specifiers
#ifndef typeSpec_hpp
#define typeSpec_hpp

#include "astNode.hpp"

class voidNode
    : public astNode
{

public:
    virtual std::string getNodeType() const override
    {
        return "voidnode";
    }
};


class charNode
    : public astNode
{

public:
    virtual std::string getNodeType() const override
    {
        return "charnode";
    }
};

class intkeywordNode
    : public astNode
{

public:
    virtual std::string getNodeType() const override
    {
        return "intkeywordnode";
    }
};

class floatkeywordNode
    : public astNode
{

public:
    virtual std::string getNodeType() const override
    {
        return "floatkeywordnode";
    }
};


class doubleNode
    : public astNode
{

public:
    virtual std::string getNodeType() const override
    {
        return "doublenode";
    }
};

class unsignedNode
    : public astNode
{

public:
    virtual std::string getNodeType() const override
    {
        return "unsignednode";
    }
};



#endif
