//Switch/Case

#ifndef SwitchNode_hpp
#define SwitchNode_hpp

#include "astNode.hpp"

class switchNode
    :public astNode
{
    private:
        nodePtr expression;
        nodePtr body;

    public:
        switchNode(nodePtr _expression, nodePtr _body):
            expression(_expression),
            body(_body)
        {}

        virtual ~switchNode()
        {}

        virtual std::string getNodeType() const override{
            return "switch";
        }

        nodePtr getExpression() const
        {
            return expression;
        }

        nodePtr getBody() const
        {
            return body;
        }
};

class case1Node
    :public astNode
{
    private:
        std::string value;
        nodePtr statements;

    public:
        case1Node(std::string _value, nodePtr _statements):
            value(_value),
            statements(_statements)
        {}

        virtual ~case1Node()
        {}

        virtual std::string getNodeType() const override{
            return "case1";
        }

        std::string getValue() const
        {
            return value;
        }

        nodePtr getStatements() const
        {
            return statements;
        }
};

class case2Node
    :public astNode
{
    private:
        nodePtr value;
        nodePtr statements;

    public:
        case2Node(nodePtr _value, nodePtr _statements):
            value(_value),
            statements(_statements)
        {}

        virtual ~case2Node()
        {}

        virtual std::string getNodeType() const override{
            return "case2";
        }

        nodePtr getValue() const
        {
            return value;
        }

        nodePtr getStatements() const
        {
            return statements;
        }
};

class defaultNode
    :public astNode
{
    private:
        nodePtr statements;

    public:
        defaultNode(nodePtr _statements):
            statements(_statements)
        {}

        virtual ~defaultNode()
        {}

        virtual std::string getNodeType() const override{
            return "default";
        }

        nodePtr getStatements() const
        {
            return statements;
        }
};

#endif
