// Function

#ifndef funcNode_hpp
#define funcNode_hpp

#include "astNode.hpp"

class funcNode
    : public astNode{
    private:
        nodePtr declarator;
        nodePtr body;

    public:
        funcNode(nodePtr _declarator, nodePtr _body):
            declarator(_declarator),
            body(_body)
        {}

        virtual ~funcNode(){
        }



        nodePtr getBody() const {
            return body;
        }

        nodePtr getDeclarator() const {
            return declarator;
        }


        virtual std::string getNodeType() const override{
            return "function";
        }



    };









// class funcNodewithParameters
//     : public astNode{
//     private:
//         nodePtr declarator;
//         nodePtr parameters;
//         nodePtr body;

//     public:
//         funcNodewithParameters(nodePtr _declarator, nodePtr _parameters, nodePtr _body):
//             declarator(_declarator),
//             parameters(_parameters),
//             body(_body)
//         {}

//         virtual ~funcNodewithParameters(){
//         }



//         nodePtr getBody() const {
//             return body;
//         }

//         nodePtr getDeclarator() const {
//             return declarator;
//         }

//         nodePtr getParameters() const {
//             return parameters;
//         }



//         virtual std::string getNodeType() const override{
//             return "functionwithparams";
//         }



//     };

class funcnamewithParams
    : public astNode{

    private:
        nodePtr declarator;
        nodePtr paramlist;

    public:
        funcnamewithParams(nodePtr _name, nodePtr _paramlist)
            : declarator(_name)
            , paramlist(_paramlist)
        {}

        virtual ~funcnamewithParams(){
        }

        virtual std::string getNodeType() const override{
            return "funcnamewithparams";
        }

        nodePtr getDeclarator() const {
            return declarator;
        }

        nodePtr getParams() const {
            return paramlist;
        }

    };

class func1CallNode
     : public astNode{
     private:
         nodePtr name;

     public:
         func1CallNode(nodePtr _name):
             name(_name)
         {}

         virtual ~func1CallNode(){
         }

         virtual std::string getNodeType() const override{
             return "funcCall1";
         }

        virtual nodePtr getName() const{
            return name;
         }



     };

class func2CallNode
     : public astNode{
     private:
         nodePtr name;
         nodePtr args;

     public:
         func2CallNode(nodePtr _name, nodePtr _args):
             name(_name),
             args(_args)
         {}

         virtual ~func2CallNode(){
         }

         virtual std::string getNodeType() const override{
             return "funcCall2";
         }

         virtual nodePtr getName() const{
            return name;
         }

         virtual nodePtr getArgs() const {
            return args;
         }

     };



#endif
