//Unary Operators

#ifndef unaryNode_hpp
#define unaryNode_hpp

#include "astNode.hpp"
#include <string>
#include <iostream>
#include <cmath>

class unaryNode
    : public astNode{
private:
    nodePtr expr;

public:
    unaryNode(nodePtr _expr):
        expr(_expr)
    {}

    virtual ~unaryNode()
    {
        delete expr;
    }

    virtual std::string getNodeType() const = 0;

    nodePtr getExpr() const
    { return expr; }

    };

class unaryMinusNode
    : public unaryNode {
public:
    unaryMinusNode(const nodePtr _expr)
        : unaryNode(_expr)
        {}

        virtual std::string getNodeType() const override{
            return "unaryMinus";
        }

    };

class unaryPlusNode
    : public unaryNode {
public:
    unaryPlusNode(const nodePtr _expr)
        : unaryNode(_expr)
        {}

        virtual std::string getNodeType() const override{
            return "unaryPlus";
        }

    };

class unaryIncNode
    : public unaryNode {
public:
    unaryIncNode(const nodePtr _expr)
        : unaryNode(_expr)
        {}

        virtual std::string getNodeType() const override{
            return "unaryInc";
        }

    };

class unaryDecNode
    : public unaryNode {
public:
    unaryDecNode(const nodePtr _expr)
        : unaryNode(_expr)
        {}

        virtual std::string getNodeType() const override{
            return "unaryDec";
        }

    };

class unaryNotNode
    : public unaryNode {
public:
    unaryNotNode(const nodePtr _expr)
        : unaryNode(_expr)
        {}

        virtual std::string getNodeType() const override{
            return "unaryNot";
        }

    };


class unaryBitwiseNotNode
    : public unaryNode {
public:
    unaryBitwiseNotNode(const nodePtr _expr)
        : unaryNode(_expr)
        {}

        virtual std::string getNodeType() const override{
            return "unaryBitwiseNot";
        }

    };
class unaryAdrNode
    : public unaryNode {
public:
    unaryAdrNode(const nodePtr _expr)
        : unaryNode(_expr)
        {}

        virtual std::string getNodeType() const override{
            return "unaryAdr";
        }


    };

#endif
