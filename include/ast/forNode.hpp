// For Loop

#ifndef forNode_hpp
#define forNode_hpp

#include "astNode.hpp"

class for1Node
    :public astNode{
private:
    nodePtr cond;
    nodePtr incr;
    nodePtr body;

public:
    for1Node(nodePtr _cond, nodePtr _incr, nodePtr _body)
        : cond(_cond)
        , incr(_incr)
        , body(_body)
    {}

    virtual ~for1Node()
    {}

    virtual std::string getNodeType() const override{
        return "for1";
    }

    nodePtr getCond() const{
        return cond;
    }

    nodePtr getIncr() const{
        return incr;
    }

    nodePtr getBody() const{
        return body;
    }

};

class for2Node
    :public astNode{
private:
    nodePtr init;
    nodePtr cond;
    nodePtr incr;
    nodePtr body;

public:
    for2Node(nodePtr _init, nodePtr _cond, nodePtr _incr, nodePtr _body)
        : init(_init)
        , cond(_cond)
        , incr(_incr)
        , body(_body)
    {}

    virtual ~for2Node()
    {}

    virtual std::string getNodeType() const override{
        return "for2";
    }

    nodePtr getInit() const{
        return init;
    }

    nodePtr getCond() const{
        return cond;
    }
    nodePtr getIncr() const{
        return incr;
    }
    nodePtr getBody() const{
        return body;
    }

};

#endif
