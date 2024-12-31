// Node

#ifndef astNode_hpp
#define astNode_hpp

#include <string>
#include <iostream>
#include <map>
#include <memory>
#include <vector>

class astNode;

typedef const astNode *nodePtr;

class astNode
{
public:
    virtual ~astNode()
    {}

    virtual std::string getNodeType() const =0;
};

#endif
