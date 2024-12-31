//Array

#ifndef arrayNode_hpp
#define arrayNode_hpp

#include "astNode.hpp"

class arrayInitializeNode
    :public astNode
{
    private:
        nodePtr element;

    public:
        arrayInitializeNode(nodePtr _element):
            element(_element)
        {}

        virtual ~arrayInitializeNode()
        {}

        virtual std::string getNodeType() const override{
            return "arrayInitialize";
        }

        nodePtr getElement() const
        {
            return element;
        }
};

class arrayDeclarNode
    :public astNode
{
    private:
        nodePtr declarator;

    public:
        arrayDeclarNode(nodePtr _declarator):
            declarator(_declarator)
        {}

        virtual ~arrayDeclarNode()
        {}

        virtual std::string getNodeType() const override{
            return "arrayDeclar";
        }

        nodePtr getDeclarator() const
        {
            return declarator;
        }

};

class arraySizeDeclarNode
    :public astNode
{
    private:
        nodePtr declarator;
        nodePtr size;

    public:
        arraySizeDeclarNode(nodePtr _declarator, nodePtr _size):
            declarator(_declarator),
            size(_size)
        {}

        virtual ~arraySizeDeclarNode()
        {}

        virtual std::string getNodeType() const override{
            return "arraySizeDeclar";
        }

        nodePtr getDeclarator() const
        {
            return declarator;
        }

        nodePtr getSize() const
        {
            return size;
        }

};

class arrayIndexNode
    :public astNode
{
    private:
        nodePtr declarator;
        nodePtr index;

    public:
        arrayIndexNode(nodePtr _declarator, nodePtr _index)
            : declarator(_declarator)
            , index(_index)
        {}

        virtual ~arrayIndexNode()
        {}

        virtual std::string getNodeType() const override{
            return "arrayIndex";
        }

        nodePtr getDeclarator() const
        {
            return declarator;
        }

        nodePtr getIndex() const
        {
            return index;
        }

};

#endif
