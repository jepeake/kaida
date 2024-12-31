//Block

#ifndef blockNode_hpp
#define blockNode_hpp

#include "astNode.hpp"

class block1Node
    : public astNode
{

public:
    virtual std::string getNodeType() const override
    {
        return "block1";
    }
};

class block2Node
    :public astNode
{
    private:
        nodePtr statementlist;

    public:
        block2Node(nodePtr statlist):
            statementlist(statlist)
        {}

        virtual ~block2Node()
        {}

        virtual std::string getNodeType() const override{
            return "block2";
        }

        nodePtr getstatementlist() const
        {
            return statementlist;
        }
};

class block3Node
    :public astNode
{
    private:
        nodePtr declarationlist;

    public:

        block3Node(nodePtr _list):
            declarationlist(_list)
        {}

        virtual ~block3Node()
        {}

        virtual std::string getNodeType() const override{
            return "block3";
        }

         nodePtr getdeclarationlist() const {
            return declarationlist;
         }

        
};

class block4Node
    :public astNode
{
    private:
        nodePtr declarationList;
        nodePtr statementList;

    public:
        block4Node(nodePtr _declarationList, nodePtr  _statementList):
            declarationList(_declarationList),
            statementList(_statementList)
        {}

        virtual ~block4Node()
        {}

        virtual std::string getNodeType() const override{
            return "block4";
        }

         nodePtr getdeclarationlist() const {
            return declarationList;
         }

         nodePtr getstatementlist() const {
            return statementList;
         }
};

#endif
