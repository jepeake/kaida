// Identifier

#ifndef identNode_hpp
#define identNode_hpp

#include "identNode.hpp"

class identNode
    :public astNode{
private:
    std::string id;

public:
    identNode(std::string _id):
        id(_id)
    {}

    virtual ~identNode(){
    }

    virtual std::string getNodeType() const override{
        return "ident";
    }

    virtual std::string getId() const{
        return id;
    }

};

#endif
