#ifndef listNode_hpp
#define listNode_hpp

#include "astNode.hpp"
#include <string>
#include <iostream>
#include <cmath>

class translationUnitListNode
    : public astNode{
private:
    nodePtr translationUnit;
    nodePtr externalDeclaration;

public:
    translationUnitListNode(nodePtr _translationUnit, nodePtr _externalDeclaration)
        : translationUnit(_translationUnit)
        , externalDeclaration(_externalDeclaration)
    {}

    virtual ~translationUnitListNode()
    {
    }

    nodePtr getTranslationUnit() const
    { return translationUnit; }

    nodePtr getExternalDeclaration() const
    { return externalDeclaration; }

    virtual std::string getNodeType() const override
    {
        return "translationUnitList";
    }

    };

class statementListNode
    : public astNode{
private:
    nodePtr statementList;
    nodePtr statement;

public:
    statementListNode(nodePtr _statementList, nodePtr _statement):
        statementList(_statementList),
        statement(_statement)
    {}

    virtual ~statementListNode()
    {
    }

    nodePtr getStatementList() const
    { return statementList; }

    nodePtr getStatement() const
    { return statement; }

    virtual std::string getNodeType() const override
    {
        return "statementList";
    }

    };

class declarationListNode
    : public astNode{
private:
    nodePtr declarationList;
    nodePtr declaration;

public:
    declarationListNode(nodePtr _declarationList, nodePtr _declaration)
        : declarationList(_declarationList)
        , declaration(_declaration)
    {}

    virtual ~declarationListNode()
    {
    }

    nodePtr getDeclarationList() const
    { return declarationList; }

    nodePtr getDeclaration() const
    { return declaration; }

    virtual std::string getNodeType() const override
    {
        return "declarationList";
    }

    };

class initDeclaratorListNode
    : public astNode{
private:
    nodePtr initDeclaratorList;
    nodePtr initDeclarator;

public:
    initDeclaratorListNode(nodePtr _initDeclaratorList, nodePtr _initDeclarator)
        : initDeclaratorList(_initDeclaratorList)
        , initDeclarator(_initDeclarator)
    {}

    virtual ~initDeclaratorListNode()
    {
    }

    nodePtr getInitDecaratorList() const
    { return initDeclaratorList; }

    nodePtr getInitDeclarator() const
    { return initDeclarator; }

    virtual std::string getNodeType() const override
    {
        return "initDeclaratorList";
    }

    };

class parameterListNode
    : public astNode{
private:
    nodePtr parameterList;
    nodePtr parameterDeclaration;

public:
    parameterListNode(nodePtr _parameterList, nodePtr _parameterDeclaration):
        parameterList(_parameterList),
        parameterDeclaration(_parameterDeclaration)
    {}

    virtual ~parameterListNode()
    {
    }

    nodePtr getParameterList() const
    { return parameterList; }

    nodePtr getParameterDeclaration() const
    { return parameterDeclaration; }

    virtual std::string getNodeType() const override
    {
        return "parameterDeclarationList";
    }

    };

class argumentExpressionListNode
    : public astNode{
private:
    nodePtr argumentExpressionList;
    nodePtr assignmentExpression;

public:
    argumentExpressionListNode(nodePtr _argumentExpressionList, nodePtr _assignmentExpression)
        : argumentExpressionList(_argumentExpressionList)
        , assignmentExpression(_assignmentExpression)
    {}

    virtual ~argumentExpressionListNode()
    {
    }

    nodePtr getArgumentExpressionList() const
    { return argumentExpressionList; }

    nodePtr getAssignmentExpression() const
    { return assignmentExpression; }

    virtual std::string getNodeType() const override
    {
        return "argumentExpressionList";
    }

    };

class initializerListNode
    : public astNode{
private:
    nodePtr initializerList;
    nodePtr initializer;

public:
    initializerListNode(nodePtr _initializerList, nodePtr _initializer):
        initializerList(_initializerList),
        initializer(_initializer)
    {}

    virtual ~initializerListNode()
    {
    }

    nodePtr getInitializerList() const
    { return initializerList; }

    nodePtr getInitializer() const
    { return initializer; }

    virtual std::string getNodeType() const override
    {
        return "initializerList";
    }

    };

class identifierListNode
    : public astNode{
private:
    nodePtr identifierList;
    std::string identifier;

public:
    identifierListNode(nodePtr _identifierList, std::string _identifier)
        : identifierList(_identifierList)
        , identifier(_identifier)
    {}

    virtual ~identifierListNode()
    {
    }

    nodePtr getIdentifierList() const
    { return identifierList; }

    std::string getIdentifier() const
    { return identifier; }

    virtual std::string getNodeType() const override
    {
        return "identifierList";
    }

};

class enumeratorListNode
    : public astNode{
private:
    nodePtr enumeratorList;
    nodePtr enumerator;

public:
    enumeratorListNode(nodePtr _enumeratorList, nodePtr _enumerator)
        : enumeratorList(_enumeratorList)
        , enumerator(_enumerator)
    {}

    virtual ~enumeratorListNode()
    {
    }

    nodePtr getenumeratorList() const
    { return enumeratorList; }

    nodePtr getenumerator() const
    { return enumerator; }

    virtual std::string getNodeType() const override
    {
        return "enumeratorList";
    }

};

class expressionListNode
    : public astNode{
private:
    nodePtr expressionList;
    nodePtr expression;

public:
    expressionListNode(nodePtr _expressionList, nodePtr _expression)
        : expressionList(_expressionList)
        , expression(_expression)
    {}

    virtual ~expressionListNode()
    {
    }

    nodePtr getexpressionList() const
    { return expressionList; }

    nodePtr getexpression() const
    { return expression; }

    virtual std::string getNodeType() const override
    {
        return "expressionList";
    }

};

#endif
