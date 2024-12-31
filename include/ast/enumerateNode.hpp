//Enumerate

#ifndef enumerateNode_hpp
#define enumerateNode_hpp

#include "astNode.hpp"

class enumDeclar1Node
    :public astNode
{
    private:
        std::string name;
        nodePtr enumerators;

    public:
        enumDeclar1Node(std::string _name, nodePtr _enumerators):
            name(_name),
            enumerators(_enumerators)
        {}

        virtual ~enumDeclar1Node()
        {}

        virtual std::string getNodeType() const override{
            return "enumDeclar1";
        }

        std::string getName() const
        {
            return name;
        }

        nodePtr getEnumerators() const
        {
            return enumerators;
        }
};

class enumDeclar2Node
    :public astNode
{
    private:
        std::string name;

    public:
        enumDeclar2Node(std::string _name):
            name(_name)
        {}

        virtual ~enumDeclar2Node()
        {}

        virtual std::string getNodeType() const override{
            return "enumDeclar";
        }

        std::string getName() const
        {
            return name;
        }

};

class enumInstant1Node
    :public astNode
{
    private:
        nodePtr object;

    public:
        enumInstant1Node(nodePtr _object):
            object(_object)
        {}

        virtual ~enumInstant1Node()
        {}

        virtual std::string getNodeType() const override{
            return "enumInstant1";
        }

        nodePtr getObject() const
        {
            return object;
        }
};

class enumInstant2Node
    :public astNode
{
    private:
        std::string name;
        nodePtr object;

    public:
        enumInstant2Node(std::string _name, nodePtr _object):
            name(_name),
            object(_object)
        {}

        virtual ~enumInstant2Node()
        {}

        virtual std::string getNodeType() const override{
            return "enumInstant2";
        }

        std::string getName() const
        {
            return name;
        }

        nodePtr getObject() const
        {
            return object;
        }
};

class enumInstant3Node
    :public astNode
{
    private:
        std::string name;

    public:
        enumInstant3Node(std::string _name):
            name(_name)
        {}

        virtual ~enumInstant3Node()
        {}

        virtual std::string getNodeType() const override{
            return "enumInstant3";
        }

        std::string getName() const
        {
            return name;
        }
};

#endif
