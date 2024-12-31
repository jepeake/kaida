// Operators

#ifndef operatorNode_hpp
#define operatorNode_hpp

#include "astNode.hpp"
#include <string>
#include <iostream>
#include <cmath>

class operatorNode
    : public astNode{
private:
    nodePtr left;
    nodePtr right;

protected:
    operatorNode(nodePtr _left, nodePtr _right)
        : left(_left)
        , right(_right) {}

public:
    virtual ~operatorNode()
    {
        delete left;
        delete right;
    }

    virtual std::string getNodeType() const =0;

    virtual nodePtr getLeft() const
    { return left; }

    virtual nodePtr getRight() const
    { return right; }

    };

class addNode
    : public operatorNode
{

public:
    addNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "add";
        }

};

class subNode
    : public operatorNode
{

public:
    subNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "sub";
        }

};

class mulNode
    : public operatorNode
{

public:
    mulNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "mul";
        }

};

class divNode
    : public operatorNode
{

public:
    divNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "div";
        }

};

class modNode
    : public operatorNode
{

public:
    modNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "mod";
        }

};

class lessThanNode
    : public operatorNode
{

public:
    lessThanNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "lessThan";
        }

};

class greaterThanNode
    : public operatorNode
{

public:
    greaterThanNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "greaterThan";
        }

};

class lessThanOrEqualNode
    : public operatorNode
{
public:
    lessThanOrEqualNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "lessThanOrEqual";
        }

};

class greaterThanOrEqualNode
    : public operatorNode
{

public:
    greaterThanOrEqualNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "greaterThanOrEqual";
        }

};

class assignNode
    : public operatorNode
{

public:
    assignNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "assign";
        }

};

class divAssignNode
    : public operatorNode
{

public:
    divAssignNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "divAssign";
        }

};

class mulAssignNode
    : public operatorNode
{

public:
    mulAssignNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "mulAssign";
        }

};

class modAssignNode
    : public operatorNode
{

public:
    modAssignNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "modAssign";
        }

};

class addAssignNode
    : public operatorNode
{

public:
    addAssignNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "addAssign";
        }

};

class subAssignNode
    : public operatorNode
{

public:
    subAssignNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "subAssign";
        }

};

class leftShiftAssignNode
    : public operatorNode
{

public:
    leftShiftAssignNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "leftShiftAssign";
        }

};

class rightShiftAssignNode
    : public operatorNode
{

public:
    rightShiftAssignNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "rightShiftAssign";
        }

};

class andAssignNode
    : public operatorNode
{

public:
    andAssignNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "andAssign";
        }

};

class exclOrAssignNode
    : public operatorNode
{

public:
    exclOrAssignNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "exclOrAssign";
        }

};

class orAssignNode
    : public operatorNode
{

public:
    orAssignNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "orAssign";
        }

};

class equalNode
    : public operatorNode
{

public:
    equalNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "equal";
        }

};

class notEqualNode
    : public operatorNode
{

public:
    notEqualNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "notEqual";
        }

};


//LOGICAL BELOW

class andNode
    : public operatorNode
{

public:
    andNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "and";
        }

};

class orNode
    : public operatorNode
{

public:
    orNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "or";
        }

};

class exclOrNode
    : public operatorNode
{

public:
    exclOrNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "exclOr";
        }

};

class logicalAndNode
    : public operatorNode
{

public:
    logicalAndNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "logicalAnd";
        }

};

class logicalOrNode
    : public operatorNode
{

public:
    logicalOrNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "logicalOr";
        }

};

class leftShiftNode
    : public operatorNode
{

public:
    leftShiftNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "leftShift";
        }

};

class rightShiftNode
    : public operatorNode
{

public:
    rightShiftNode(nodePtr _left, nodePtr _right)
        : operatorNode(_left, _right)
    {}

    virtual std::string getNodeType() const override{
            return "rightShift";
        }

};

#endif
