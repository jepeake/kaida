//Break/Continue

#ifndef breakNode_hpp
#define breakNode_hpp

#include "astNode.hpp"

class breakNode
    :public astNode
{
    public:
        breakNode()
        {}

        virtual ~breakNode()
        {}

        virtual std::string getNodeType() const override{
            return "break";
        }

};

class continueNode
    :public astNode
{
    public:
        continueNode()
        {}

        virtual ~continueNode()
        {}

        virtual std::string getNodeType() const override{
            return "continue";
        }

};

#endif
