#include "ast.hpp"

#include <string>
#include <regex>
#include <map>

static int makeNameUnq1=0;

static int makeNameUnq2=0;

static std::string makeName(std::string base)
{
    return base+std::to_string(makeNameUnq1++);
}

static std::string makeNameParam(std::string base)
{
    return base+std::to_string(makeNameUnq2++);
}

std::map <std::string, std::string> varToReg;

int maxnumberofelements;
int elementnumber=0;





void CompileRec(
    std::string destReg,    // The name of the register to put the result in
    nodePtr program,
    std::ostream &w
){

    //PRIMITIVES

    if(program->getNodeType() == "int"){
        if( ((intNode*)program)->getInt() > 2047){
            w << "addi " << destReg << ", " << "zero" << ", " << 0 << std::endl;
            w << "lui " << destReg << ", " << "%hi(" << ((intNode*)program)->getInt() << ")" << std::endl;
            w << "addi " << destReg << ", " << destReg << ", " << "%lo(" << ((intNode*)program)->getInt() << ")" << std::endl;

        }
        else{
            w << "addi " << destReg << ", " << "zero" << ", " << 0 << std::endl;
            w << "addi " << destReg <<", " << destReg << ", " << ((intNode*)program)->getInt() << std::endl;
        }

    }

    else if(program->getNodeType() == "ident"){
        varToReg[((identNode*)program)->getId()] = destReg;
    }






    //KEYWORDS
    else if(program->getNodeType() == "int"){

    }





   // UNARY OPERATORS


    else if(program->getNodeType() == "unaryInc"){


        CompileRec(destReg, ((unaryIncNode*)program)->getExpr(), w);
        w << "addi " << destReg << ", " << destReg << ", 1" << std::endl;

    }

    else if(program->getNodeType() == "unaryBitwiseNot"){
        std::string srcReg = makeName("t");
        CompileRec(srcReg, ((unaryNotNode*)program)->getExpr(), w);
        w << "xori "<< destReg << ", " << srcReg << ", -1" << std::endl;
    }







   // ARITHMETIC OPERATORS
    else if(program->getNodeType() == "add"){
        if( ((((addNode*)program)->getLeft())->getNodeType() == "ident") && ((((addNode*)program)->getRight())->getNodeType() == "ident") ){
            w << "  add " << destReg << ", " << varToReg[((identNode*)((addNode*)program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((addNode*)program)->getRight())->getId()] << std::endl;
        }

        else if( ((((addNode*)program)->getLeft())->getNodeType() == "ident") && ((((addNode*)program)->getRight())->getNodeType() == "int") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((addNode*)program)->getRight(), w);
            w << "add " << destReg << ", " << varToReg[((identNode*)((addNode*)program)->getLeft())->getId()] << ", " << temp << std::endl;
        }

        else if( ((((addNode*)program)->getLeft())->getNodeType() == "int") && ((((addNode*)program)->getRight())->getNodeType() == "ident") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((addNode*)program)->getLeft(), w);
            w << "add " << destReg << ", " << temp << ", " << varToReg[((identNode*)((addNode*)program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp1 = makeName("t");
            std::string temp2 = makeName("t");
            CompileRec(temp1, ((addNode*)program)->getLeft(), w);
            CompileRec(temp2, ((addNode*)program)->getRight(), w);
            w << "add " << destReg << ", " << temp1 << ", " << temp2 << std::endl;
        }


    }

    else if(program->getNodeType() == "sub"){
        if( ((((subNode*)program)->getLeft())->getNodeType() == "ident") && ((((subNode*)program)->getRight())->getNodeType() == "ident") ){
            w << "sub " << destReg << ", " << varToReg[((identNode*)((subNode*)program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((subNode*)program)->getRight())->getId()] << std::endl;
        }

        else if( ((((subNode*)program)->getLeft())->getNodeType() == "ident") && ((((subNode*)program)->getRight())->getNodeType() == "int") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((subNode*)program)->getRight(), w);
            w << "sub " << destReg << ", " << varToReg[((identNode*)((subNode*)program)->getLeft())->getId()] << ", " << temp << std::endl;
        }

        else if( ((((subNode*)program)->getLeft())->getNodeType() == "int") && ((((subNode*)program)->getRight())->getNodeType() == "ident") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((subNode*)program)->getLeft(), w);
            w << "sub " << destReg << ", " << temp << ", " << varToReg[((identNode*)((subNode*)program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp1 = makeName("t");
            std::string temp2 = makeName("t");
            CompileRec(temp1, ((subNode*)program)->getLeft(), w);
            CompileRec(temp2, ((subNode*)program)->getRight(), w);
            w << "sub " << destReg << ", " << temp1 << ", " << temp2 << std::endl;
        }


    }

    else if(program->getNodeType() == "mul"){

        if( ((((mulNode*)program)->getLeft())->getNodeType() == "ident") && ((((mulNode*)program)->getRight())->getNodeType() == "ident") ){
            w << "mul " << destReg << ", " << varToReg[((identNode*)((mulNode*)program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((mulNode*)program)->getRight())->getId()] << std::endl;
        }

        else if( ((((mulNode*)program)->getLeft())->getNodeType() == "ident") && ((((mulNode*)program)->getRight())->getNodeType() == "int") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((mulNode*)program)->getRight(), w);
            w << "mul " << destReg << ", " << varToReg[((identNode*)((mulNode*)program)->getLeft())->getId()] << ", " << temp << std::endl;
        }

        else if( ((((mulNode*)program)->getLeft())->getNodeType() == "int") && ((((mulNode*)program)->getRight())->getNodeType() == "ident") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((mulNode*)program)->getLeft(), w);
            w << "mul " << destReg << ", " << temp << ", " << varToReg[((identNode*)((mulNode*)program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp1 = makeName("t");
            std::string temp2 = makeName("t");
            CompileRec(temp1, ((mulNode*)program)->getLeft(), w);
            CompileRec(temp2, ((mulNode*)program)->getRight(), w);
            w << "mul " << destReg << ", " << temp1 << ", " << temp2 << std::endl;
        }

    }

    else if(program->getNodeType() == "div"){
        if( ((((divNode*)program)->getLeft())->getNodeType() == "ident") && ((((divNode*)program)->getRight())->getNodeType() == "ident") ){
            w << "div " << destReg << ", " << varToReg[((identNode*)((divNode*)program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((divNode*)program)->getRight())->getId()] << std::endl;
        }

        else if( ((((divNode*)program)->getLeft())->getNodeType() == "ident") && ((((divNode*)program)->getRight())->getNodeType() == "int") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((divNode*)program)->getRight(), w);
            w << "div " << destReg << ", " << varToReg[((identNode*)((divNode*)program)->getLeft())->getId()] << ", " << temp << std::endl;
        }

        else if( ((((divNode*)program)->getLeft())->getNodeType() == "int") && ((((divNode*)program)->getRight())->getNodeType() == "ident") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((divNode*)program)->getLeft(), w);
            w << "div " << destReg << ", " << temp << ", " << varToReg[((identNode*)((divNode*)program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp1 = makeName("t");
            std::string temp2 = makeName("t");
            CompileRec(temp1, ((divNode*)program)->getLeft(), w);
            CompileRec(temp2, ((divNode*)program)->getRight(), w);
            w << "div " << destReg << ", " << temp1 << ", " << temp2 << std::endl;
        }


    }

    else if(program->getNodeType() == "mod"){
        if( ((((modNode*)program)->getLeft())->getNodeType() == "ident") && ((((modNode*)program)->getRight())->getNodeType() == "ident") ){
            w << "rem " << destReg << ", " << varToReg[((identNode*)((modNode*)program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((modNode*)program)->getRight())->getId()] << std::endl;
        }

        else if( ((((modNode*)program)->getLeft())->getNodeType() == "ident") && ((((modNode*)program)->getRight())->getNodeType() == "int") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((modNode*)program)->getRight(), w);
            w << "rem " << destReg << ", " << varToReg[((identNode*)((modNode*)program)->getLeft())->getId()] << ", " << temp << std::endl;
        }

        else if( ((((modNode*)program)->getLeft())->getNodeType() == "int") && ((((modNode*)program)->getRight())->getNodeType() == "ident") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((modNode*)program)->getLeft(), w);
            w << "rem " << destReg << ", " << temp << ", " << varToReg[((identNode*)((modNode*)program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp1 = makeName("t");
            std::string temp2 = makeName("t");
            CompileRec(temp1, ((modNode*)program)->getLeft(), w);
            CompileRec(temp2, ((modNode*)program)->getRight(), w);
            w << "rem " << destReg << ", " << temp1 << ", " << temp2 << std::endl;
        }


    }

    else if(program->getNodeType() == "lessThan"){
        if( ((((lessThanNode*)program)->getLeft())->getNodeType() == "ident") && ((((lessThanNode*)program)->getRight())->getNodeType() == "ident") ){
            w << "slt " << destReg << ", " << varToReg[((identNode*)((lessThanNode*)program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((lessThanNode*)program)->getRight())->getId()] << std::endl;
        }

        else if( ((((lessThanNode*)program)->getLeft())->getNodeType() == "ident") && ((((lessThanNode*)program)->getRight())->getNodeType() == "int") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((lessThanNode*)program)->getRight(), w);
            w << "slt " << destReg << ", " << varToReg[((identNode*)((lessThanNode*)program)->getLeft())->getId()] << ", " << temp << std::endl;
        }

        else if( ((((lessThanNode*)program)->getLeft())->getNodeType() == "int") && ((((lessThanNode*)program)->getRight())->getNodeType() == "ident") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((lessThanNode*)program)->getLeft(), w);
            w << "slt " << destReg << ", " << temp << ", " << varToReg[((identNode*)((lessThanNode*)program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp1 = makeName("t");
            std::string temp2 = makeName("t");
            CompileRec(temp1, ((lessThanNode*)program)->getLeft(), w);
            CompileRec(temp2, ((lessThanNode*)program)->getRight(), w);
            w << "slt " << destReg << ", " << temp1 << ", " << temp2 << std::endl;
        }
    }


    else if(program->getNodeType() == "lessThanOrEqual"){
         if( ((((lessThanOrEqualNode*)program)->getLeft())->getNodeType() == "ident") && ((((lessThanOrEqualNode*)program)->getRight())->getNodeType() == "ident") ){
            w << "slt " << destReg << ", " << varToReg[((identNode*)((lessThanOrEqualNode*)program)->getRight())->getId()] << ", " << varToReg[((identNode*)((lessThanOrEqualNode*)program)->getLeft())->getId()] << std::endl;
            w << "xori " << destReg << ", " << destReg << ", " << "1" << std::endl;
        }

        else if( ((((lessThanOrEqualNode*)program)->getLeft())->getNodeType() == "ident") && ((((lessThanOrEqualNode*)program)->getRight())->getNodeType() == "int") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((lessThanOrEqualNode*)program)->getRight(), w);
            w << "slt " << destReg << ", " << temp << ", " << varToReg[((identNode*)((lessThanOrEqualNode*)program)->getLeft())->getId()] << std::endl;
            w << "xori " << destReg << ", " << destReg << ", " << "1" << std::endl;
        }

        else if( ((((lessThanOrEqualNode*)program)->getLeft())->getNodeType() == "int") && ((((lessThanOrEqualNode*)program)->getRight())->getNodeType() == "ident") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((lessThanOrEqualNode*)program)->getLeft(), w);
            w << "slt " << destReg << ", " << varToReg[((identNode*)((lessThanOrEqualNode*)program)->getRight())->getId()] << ", " << temp <<std::endl;
            w << "xori " << destReg << ", " << destReg << ", " << "1" << std::endl;
        }

        else{
            std::string temp1 = makeName("t");
            std::string temp2 = makeName("t");
            CompileRec(temp1, ((lessThanOrEqualNode*)program)->getLeft(), w);
            CompileRec(temp2, ((lessThanOrEqualNode*)program)->getRight(), w);
            w << "slt " << destReg << ", " << temp2 << ", " << temp1 << std::endl;
            w << "xori " << destReg << ", " << destReg << ", " << "1" << std::endl;
        }



    }

    else if(program->getNodeType() == "greaterThan"){
        if( ((((greaterThanNode*)program)->getLeft())->getNodeType() == "ident") && ((((greaterThanNode*)program)->getRight())->getNodeType() == "ident") ){
            w << "slt " << destReg << ", " << varToReg[((identNode*)((greaterThanNode*)program)->getRight())->getId()] << ", " << varToReg[((identNode*)((greaterThanNode*)program)->getLeft())->getId()] << std::endl;
        }

        else if( ((((greaterThanNode*)program)->getLeft())->getNodeType() == "ident") && ((((greaterThanNode*)program)->getRight())->getNodeType() == "int") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((greaterThanNode*)program)->getRight(), w);
            w << "slt " << destReg << ", " << temp << ", " << varToReg[((identNode*)((greaterThanNode*)program)->getLeft())->getId()] << std::endl;
        }

        else if( ((((greaterThanNode*)program)->getLeft())->getNodeType() == "int") && ((((greaterThanNode*)program)->getRight())->getNodeType() == "ident") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((greaterThanNode*)program)->getLeft(), w);
            w << "slt " << destReg << ", " << varToReg[((identNode*)((greaterThanNode*)program)->getRight())->getId()] << ", " << temp <<std::endl;
        }

        else{
            std::string temp1 = makeName("t");
            std::string temp2 = makeName("t");
            CompileRec(temp1, ((greaterThanNode*)program)->getLeft(), w);
            CompileRec(temp2, ((greaterThanNode*)program)->getRight(), w);
            w << "slt " << destReg << ", " << temp2 << ", " << temp1 << std::endl;
        }


    }


    else if(program->getNodeType() == "greaterThanOrEqual"){
        if( ((((greaterThanOrEqualNode*)program)->getLeft())->getNodeType() == "ident") && ((((greaterThanOrEqualNode*)program)->getRight())->getNodeType() == "ident") ){
            w << "slt " << destReg << ", " << varToReg[((identNode*)((greaterThanOrEqualNode*)program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((greaterThanOrEqualNode*)program)->getRight())->getId()] << std::endl;
            w << "xori " << destReg << ", " << destReg << ", " << "1" << std::endl;

        }

        else if( ((((greaterThanOrEqualNode*)program)->getLeft())->getNodeType() == "ident") && ((((greaterThanOrEqualNode*)program)->getRight())->getNodeType() == "int") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((greaterThanOrEqualNode*)program)->getRight(), w);
            w << "slt " << destReg << ", " << varToReg[((identNode*)((greaterThanOrEqualNode*)program)->getLeft())->getId()] << ", " << temp << std::endl;
            w << "xori " << destReg << ", " << destReg << ", " << "1" << std::endl;
        }

        else if( ((((greaterThanOrEqualNode*)program)->getLeft())->getNodeType() == "int") && ((((greaterThanOrEqualNode*)program)->getRight())->getNodeType() == "ident") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((greaterThanOrEqualNode*)program)->getLeft(), w);
            w << "slt " << destReg << ", " << temp << ", " << varToReg[((identNode*)((greaterThanOrEqualNode*)program)->getRight())->getId()] << std::endl;
            w << "xori " << destReg << ", " << destReg << ", " << "1" << std::endl;
        }

        else{
            std::string temp1 = makeName("t");
            std::string temp2 = makeName("t");
            CompileRec(temp1, ((greaterThanOrEqualNode*)program)->getLeft(), w);
            CompileRec(temp2, ((greaterThanOrEqualNode*)program)->getRight(), w);
            w << "slt " << destReg << ", " << temp1 << ", " << temp2 << std::endl;
            w << "xori " << destReg << ", " << destReg << ", " << "1" << std::endl;
        }


    }











    //LOGICAL OPERATORS

    else if(program->getNodeType() == "and"){
        if( ((((andNode*)program)->getLeft())->getNodeType() == "ident") && ((((andNode*)program)->getRight())->getNodeType() == "ident") ){
            w << "and " << destReg << ", " << varToReg[((identNode*)((andNode*)program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((addNode*)program)->getRight())->getId()] << std::endl;
        }

        else if( ((((andNode*)program)->getLeft())->getNodeType() == "ident") && ((((andNode*)program)->getRight())->getNodeType() == "int") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((andNode*)program)->getRight(), w);
            w << "and " << destReg << ", " << varToReg[((identNode*)((andNode*)program)->getLeft())->getId()] << ", " << temp << std::endl;
        }

        else if( ((((andNode*)program)->getLeft())->getNodeType() == "int") && ((((andNode*)program)->getRight())->getNodeType() == "ident") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((andNode*)program)->getLeft(), w);
            w << "and " << destReg << ", " << temp << ", " << varToReg[((identNode*)((andNode*)program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp1 = makeName("t");
            std::string temp2 = makeName("t");
            CompileRec(temp1, ((andNode*)program)->getLeft(), w);
            CompileRec(temp2, ((andNode*)program)->getRight(), w);
            w << "and " << destReg << ", " << temp1 << ", " << temp2 << std::endl;
        }

    }

    else if(program->getNodeType() == "or"){
        if( ((((orNode*)program)->getLeft())->getNodeType() == "ident") && ((((orNode*)program)->getRight())->getNodeType() == "ident") ){
            w << "or " << destReg << ", " << varToReg[((identNode*)((orNode*)program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((addNode*)program)->getRight())->getId()] << std::endl;
        }

        else if( ((((orNode*)program)->getLeft())->getNodeType() == "ident") && ((((orNode*)program)->getRight())->getNodeType() == "int") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((orNode*)program)->getRight(), w);
            w << "or " << destReg << ", " << varToReg[((identNode*)((orNode*)program)->getLeft())->getId()] << ", " << temp << std::endl;
        }

        else if( ((((orNode*)program)->getLeft())->getNodeType() == "int") && ((((orNode*)program)->getRight())->getNodeType() == "ident") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((orNode*)program)->getLeft(), w);
            w << "or " << destReg << ", " << temp << ", " << varToReg[((identNode*)((orNode*)program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp1 = makeName("t");
            std::string temp2 = makeName("t");
            CompileRec(temp1, ((orNode*)program)->getLeft(), w);
            CompileRec(temp2, ((orNode*)program)->getRight(), w);
            w << "or " << destReg << ", " << temp1 << ", " << temp2 << std::endl;
        }


    }

    else if(program->getNodeType() == "leftShift"){
        if( ((((leftShiftNode*)program)->getLeft())->getNodeType() == "ident") && ((((leftShiftNode*)program)->getRight())->getNodeType() == "ident") ){
            w << "sll " << destReg << ", " << varToReg[((identNode*)((leftShiftNode*)program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((leftShiftNode*)program)->getRight())->getId()] << std::endl;
        }

        else if( ((((leftShiftNode*)program)->getLeft())->getNodeType() == "ident") && ((((leftShiftNode*)program)->getRight())->getNodeType() == "int") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((leftShiftNode*)program)->getRight(), w);
            w << "sll " << destReg << ", " << varToReg[((identNode*)((leftShiftNode*)program)->getLeft())->getId()] << ", " << temp << std::endl;
        }

        else if( ((((leftShiftNode*)program)->getLeft())->getNodeType() == "int") && ((((leftShiftNode*)program)->getRight())->getNodeType() == "ident") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((leftShiftNode*)program)->getLeft(), w);
            w << "sll " << destReg << ", " << temp << ", " << varToReg[((identNode*)((leftShiftNode*)program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp1 = makeName("t");
            std::string temp2 = makeName("t");
            CompileRec(temp1, ((leftShiftNode*)program)->getLeft(), w);
            CompileRec(temp2, ((leftShiftNode*)program)->getRight(), w);
            w << "sll " << destReg << ", " << temp1 << ", " << temp2 << std::endl;
        }
    }

    else if(program->getNodeType() == "rightShift"){
        if( ((((rightShiftNode*)program)->getLeft())->getNodeType() == "ident") && ((((rightShiftNode*)program)->getRight())->getNodeType() == "ident") ){
            w << "  srl " << destReg << ", " << varToReg[((identNode*)((rightShiftNode*)program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((rightShiftNode*)program)->getRight())->getId()] << std::endl;
        }

        else if( ((((rightShiftNode*)program)->getLeft())->getNodeType() == "ident") && ((((rightShiftNode*)program)->getRight())->getNodeType() == "int") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((rightShiftNode*)program)->getRight(), w);
            w << "srl " << destReg << ", " << varToReg[((identNode*)((rightShiftNode*)program)->getLeft())->getId()] << ", " << temp << std::endl;
        }

        else if( ((((rightShiftNode*)program)->getLeft())->getNodeType() == "int") && ((((rightShiftNode*)program)->getRight())->getNodeType() == "ident") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((rightShiftNode*)program)->getLeft(), w);
            w << "srl " << destReg << ", " << temp << ", " << varToReg[((identNode*)((rightShiftNode*)program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp1 = makeName("t");
            std::string temp2 = makeName("t");
            CompileRec(temp1, ((rightShiftNode*)program)->getLeft(), w);
            CompileRec(temp2, ((rightShiftNode*)program)->getRight(), w);
            w << "srl " << destReg << ", " << temp1 << ", " << temp2 << std::endl;
        }
    }


    else if(program->getNodeType() == "exclOr"){
        if( ((((exclOrNode*)program)->getLeft())->getNodeType() == "ident") && ((((exclOrNode*)program)->getRight())->getNodeType() == "ident") ){
            w << "xor " << destReg << ", " << varToReg[((identNode*)((exclOrNode*)program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((addNode*)program)->getRight())->getId()] << std::endl;
        }

        else if( ((((exclOrNode*)program)->getLeft())->getNodeType() == "ident") && ((((exclOrNode*)program)->getRight())->getNodeType() == "int") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((exclOrNode*)program)->getRight(), w);
            w << "xor " << destReg << ", " << varToReg[((identNode*)((exclOrNode*)program)->getLeft())->getId()] << ", " << temp << std::endl;
        }

        else if( ((((exclOrNode*)program)->getLeft())->getNodeType() == "int") && ((((exclOrNode*)program)->getRight())->getNodeType() == "ident") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((exclOrNode*)program)->getLeft(), w);
            w << "xor " << destReg << ", " << temp << ", " << varToReg[((identNode*)((exclOrNode*)program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp1 = makeName("t");
            std::string temp2 = makeName("t");
            CompileRec(temp1, ((exclOrNode*)program)->getLeft(), w);
            CompileRec(temp2, ((exclOrNode*)program)->getRight(), w);
            w << "xor " << destReg << ", " << temp1 << ", " << temp2 << std::endl;
        }
    }

    else if(program->getNodeType() == "logicalAnd"){

    }

    else if(program->getNodeType() == "logicalOr"){

    }

    else if(program->getNodeType() == "equal"){
         if( ((((subNode*)program)->getLeft())->getNodeType() == "ident") && ((((subNode*)program)->getRight())->getNodeType() == "ident") ){
            w << "sub " << destReg << ", " << varToReg[((identNode*)((subNode*)program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((subNode*)program)->getRight())->getId()] << std::endl;
            w << "seqz " << destReg << ", " << destReg << std::endl;
        }

        else if( ((((subNode*)program)->getLeft())->getNodeType() == "ident") && ((((subNode*)program)->getRight())->getNodeType() == "int") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((subNode*)program)->getRight(), w);
            w << "sub " << destReg << ", " << varToReg[((identNode*)((subNode*)program)->getLeft())->getId()] << ", " << temp << std::endl;
            w << "seqz " << destReg << ", " << destReg << std::endl;
        }

        else if( ((((subNode*)program)->getLeft())->getNodeType() == "int") && ((((subNode*)program)->getRight())->getNodeType() == "ident") ){
            std::string temp = makeName("t");
            CompileRec(temp, ((subNode*)program)->getLeft(), w);
            w << "sub " << destReg << ", " << temp << ", " << varToReg[((identNode*)((subNode*)program)->getRight())->getId()] << std::endl;
            w << "seqz " << destReg << ", " << destReg << std::endl;
        }

        else{
            std::string temp1 = makeName("t");
            std::string temp2 = makeName("t");
            CompileRec(temp1, ((subNode*)program)->getLeft(), w);
            CompileRec(temp2, ((subNode*)program)->getRight(), w);
            w << "sub " << destReg << ", " << temp1 << ", " << temp2 << std::endl;
            w << "seqz " << destReg << ", " << destReg << std::endl;
        }


    }













    //LOOPS

    else if(program->getNodeType() == "if"){
        std::string cond = makeName("t");
        CompileRec(cond, ((ifNode*)program)->getCondition(), w);
        w <<"beq "<<cond<<", "<<"zero"<<", "<<"Exit"<<std::endl;
        CompileRec(destReg, ((ifNode*)program)->getStat(), w);
        w << "Exit:" << std::endl;


    }

    else if(program->getNodeType() == "if_else"){
        std::string cond = makeName("t");
        CompileRec(cond, ((ifElseNode*)program)->getCondition(), w);
        w <<"beq "<<cond<<", "<<"zero"<<", "<<"Else"<<std::endl;
        CompileRec(destReg, ((ifElseNode*)program)->getIfStat(), w);
        w <<"beq "<<"zero"<<", "<<"zero"<<", "<<"Exit"<<std::endl;
        w <<"Else:" << std::endl;
        CompileRec(destReg, ((ifElseNode*)program)->getElseStat(), w);
        w << "Exit:" << std::endl;


    }

    else if(program->getNodeType() == "while"){
        std::string condition = makeName("t");
        w << "Loop:" << std::endl;
        CompileRec(condition, ((whileNode*)program)->getCondition(), w);
        w <<"beq "<<condition<<", "<<"zero"<<", "<<"Exit"<<std::endl;
        CompileRec(destReg, ((whileNode*)program)->getStat(), w);
        w << "bne " << condition << ", " << "zero" << ", " << "Loop" << std::endl;
        w << "Exit:" << std::endl;

    }

    else if(program->getNodeType() == "for1"){
        std::string condition = makeName("t");
        w << "Loop:" << std::endl;
        CompileRec(condition, ((for1Node*)program)->getCond(), w);
        w <<"beq "<<condition<<", "<<"zero"<<", "<<"Exit"<<std::endl;
        CompileRec(destReg, ((for1Node*)program)->getBody(), w);
        CompileRec(condition, ((for1Node*)program)->getIncr(), w);
        w << "bne " << condition << ", " << "zero" << ", " << "Loop" << std::endl;
        w << "Exit:" << std::endl;
    }



    else if(program->getNodeType() == "for2"){
        std::string condition = makeName("t");
        CompileRec(condition, ((for2Node*)program)->getInit(), w);
        w << "Loop:" << std::endl;
        CompileRec(condition, ((for2Node*)program)->getCond(), w);
        w <<"beq "<<condition<<", "<<"zero"<<", "<<"Exit"<<std::endl;
        CompileRec(destReg, ((for2Node*)program)->getBody(), w);
        CompileRec(condition, ((for2Node*)program)->getIncr(), w);
        w << "bne " << condition << ", " << "zero" << ", " << "Loop" << std::endl;
        w << "Exit:" << std::endl;

    }

     else if(program->getNodeType() == "switch"){
        /*std::string condition = makeName("t");
        CompileRec(condition, ((switchNode*)program)->getExpression(),w);

        std::vector<std::string> caseLabels;
            for(auto& case2Node : ((switchNode*)program)->getBody()){
                if(case2Node->getNodeType() == "case2"){
                    caseLab.push_back(makeName("Case"));
             }
         }

         std::string defaultLabel;
         for(auto& case2Node : ((switchNode*)program)->getBody()){
             if(caseNode->getNodeType() == "default"){
                 defaultLabel = makeName("Default");
                 break;
             }
         }

         int caseIndex = 0;
         for(auto& case2Node : ((swtichNode*)program)->getBody()){
             if(caseNode->getNodeType() == "case2"){
                w << "beq " << condition << ", " << case2Node->getStatements() << caseLabels[caseIndex] << std::endl;
                caseIndex++;
             }
         }

    if(!defaultLabel.empty()){
        w << "j " << defaultLabel << std::endl;
    }

    caseIndex = 0;
    for(auto& caseNode : ((switchNode*)program)->getBody()){
        if(case2Node->getNodeType() == "case2"){
            w << caseLabels[caseIndex] << ":" << std::endl;
            CompileRec(destReg, case2Node->getStatements, w);
            w << "j Exit" << std::endl;
            caseIndex++;
        }
    }

    if(!defaultLabel.empty()){
        w << defaultLabel << ":" << std::endl;
        CompileRec(destReg, ((defaultNode*)program->getStatements), w);
        w << "j Exit" << std::endl;
    }

    w << "Exit:" << std::endl;*/


     }













    //FUNCTIONS AND SUPPORTING STRUCTURES

    else if(program->getNodeType() == "function"){

        if( (((funcNode*)program)->getDeclarator())->getNodeType() == "ident" ){
            w << ".globl " << ((identNode*)(((funcNode*)program)->getDeclarator()))->getId() << std::endl;
            w << std::endl;
            w << ((identNode*)(((funcNode*)program)->getDeclarator()))->getId() << ":" << std::endl;
            w << "fsd fa0, -18(s0)" << std::endl;
            w << "fsd fa1, -32(s0)" << std::endl;
        }

        else{
             CompileRec(destReg, ((funcNode*)program)->getDeclarator(), w);
        }

        CompileRec(destReg, ((funcNode*) program)->getBody(), w);


    }

    else if(program->getNodeType() == "funcnamewithparams"){
        if( (((funcnamewithParams*)program)->getDeclarator())->getNodeType() == "ident" ){
            w << ".globl " << ((identNode*)(((funcnamewithParams*)program)->getDeclarator()))->getId() << std::endl;
            w << std::endl;
            w << ((identNode*)(((funcnamewithParams*)program)->getDeclarator()))->getId() << ":" << std::endl;
            w << "fsd fa0,-18(s0)" << std::endl;
            w << "fsd fa1,-32(s0)" << std::endl;

        }
        CompileRec(destReg, ((funcnamewithParams*) program)->getParams(), w);
    }



    else if(program->getNodeType() == "block1"){

    }



    else if(program->getNodeType() == "block2"){
        CompileRec(destReg, ((block2Node*)program)->getstatementlist(), w);


    }


    else if(program->getNodeType() == "block3"){
        CompileRec(destReg, ((block3Node*)program)->getdeclarationlist(), w);


    }

    else if(program->getNodeType() == "block4"){
        CompileRec(destReg, ((block4Node*)program)->getdeclarationlist(), w);
        CompileRec(destReg, ((block4Node*)program)->getstatementlist(), w);


    }

    else if (program->getNodeType() == "return"){

        if( (((returnNode*)program)->getExpr())->getNodeType() == "ident"){
            w << "add "<<"a0" <<" , zero, " << varToReg[((identNode*)(((returnNode*)program)->getExpr()))->getId()] << std::endl;
            w << "ret" << std::endl;
        }

        else{

            CompileRec(destReg, ((returnNode*)program)->getExpr(), w);
            w << "add "<<"a0" <<" , zero, " << destReg << std::endl;
            w << "ret" << std::endl;

        }

    }

    else if(program->getNodeType() == "funcCall1" or program->getNodeType() == "funcCall2"){

    }





    //VARIABLE DECLARATIONS AND ASSIGNMENTS

    else if(program->getNodeType() == "initializeDeclarator"){
        std::string t = makeName("t");
        CompileRec(t, ((initializedDeclaratorNode*) program)->getDeclarator(), w);
        CompileRec(t, ((initializedDeclaratorNode*) program)->getInitializeValue(), w);

    }

    else if(program->getNodeType() == "declaration"){
        CompileRec(destReg, ((declarationNode*) program)->getDeclarator(), w);

    }

    else if(program->getNodeType() == "assign"){
        if((((assignNode*) program)->getRight())->getNodeType() == "int"){
            w << "addi " << varToReg[((identNode*)((assignNode*) program)->getLeft())->getId()] << ", " << "zero" << ", " << ((intNode*)((assignNode*) program)->getRight())->getInt() << std::endl;
        }

        else if((((assignNode*) program)->getRight())->getNodeType() == "ident"){
            w << "addi " << varToReg[((identNode*)((assignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((assignNode*) program)->getRight())->getId()] << ", 0" << std::endl;
        }
        else{
            CompileRec(varToReg[((identNode*)((assignNode*) program)->getLeft())->getId()], ((assignNode*) program)->getRight(), w );//DID THIS FIX ISSUE
        }
    }


    else if(program->getNodeType() == "addAssign"){
        if((((addAssignNode*) program)->getRight())->getNodeType() == "int"){
            w << "addi " << varToReg[((identNode*)((addAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((addAssignNode*) program)->getLeft())->getId()] << ", " << ((intNode*)((addAssignNode*) program)->getRight())->getInt() << std::endl;
        }

        else if((((addAssignNode*) program)->getRight())->getNodeType() == "ident"){
            w << "add " << varToReg[((identNode*)((addAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((addAssignNode*) program)->getRight())->getId()] << ", " << varToReg[((identNode*)((addAssignNode*) program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp = makeName("t");
            CompileRec(temp, ((addAssignNode*) program)->getRight(), w );
            w << "add " << varToReg[((identNode*)((addAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((addAssignNode*) program)->getRight())->getId()] << ", " << temp << std::endl;
        }
    }

    else if(program->getNodeType() == "leftShiftAssign"){
        if((((leftShiftAssignNode*) program)->getRight())->getNodeType() == "int"){
            w << "slli " << varToReg[((identNode*)((leftShiftAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((leftShiftAssignNode*) program)->getLeft())->getId()] << ", " << ((intNode*)((leftShiftAssignNode*) program)->getRight())->getInt() << std::endl;
        }

        else if((((leftShiftAssignNode*) program)->getRight())->getNodeType() == "ident"){
            w << "sll " << varToReg[((identNode*)((leftShiftAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((leftShiftAssignNode*) program)->getRight())->getId()] << ", " << varToReg[((identNode*)((leftShiftAssignNode*) program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp = makeName("t");
            CompileRec(temp, ((leftShiftAssignNode*) program)->getRight(), w );
            w << "sll " << varToReg[((identNode*)((leftShiftAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((leftShiftAssignNode*) program)->getRight())->getId()] << ", " << temp << std::endl;
        }
    }

    else if(program->getNodeType() == "rightShiftAssign"){
        if((((rightShiftAssignNode*) program)->getRight())->getNodeType() == "int"){
            w << "srli " << varToReg[((identNode*)((rightShiftAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((rightShiftAssignNode*) program)->getLeft())->getId()] << ", " << ((intNode*)((rightShiftAssignNode*) program)->getRight())->getInt() << std::endl;
        }

        else if((((rightShiftAssignNode*) program)->getRight())->getNodeType() == "ident"){
            w << "srl " << varToReg[((identNode*)((rightShiftAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((rightShiftAssignNode*) program)->getRight())->getId()] << ", " << varToReg[((identNode*)((rightShiftAssignNode*) program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp = makeName("t");
            CompileRec(temp, ((rightShiftAssignNode*) program)->getRight(), w );
            w << "srl " << varToReg[((identNode*)((rightShiftAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((rightShiftAssignNode*) program)->getRight())->getId()] << ", " << temp << std::endl;
        }
    }

    else if(program->getNodeType() == "andAssign"){
        if((((andAssignNode*) program)->getRight())->getNodeType() == "int"){
            w << "andi " << varToReg[((identNode*)((andAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((andAssignNode*) program)->getLeft())->getId()] << ", " << ((intNode*)((andAssignNode*) program)->getRight())->getInt() << std::endl;
        }

        else if((((andAssignNode*) program)->getRight())->getNodeType() == "ident"){
            w << "srl " << varToReg[((identNode*)((andAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((andAssignNode*) program)->getRight())->getId()] << ", " << varToReg[((identNode*)((andAssignNode*) program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp = makeName("t");
            CompileRec(temp, ((andAssignNode*) program)->getRight(), w );
            w << "srl " << varToReg[((identNode*)((andAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((andAssignNode*) program)->getRight())->getId()] << ", " << temp << std::endl;
        }

    }

    else if(program->getNodeType() == "orAssign"){
        if((((orAssignNode*) program)->getRight())->getNodeType() == "int"){
            w << "ori " << varToReg[((identNode*)((orAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((orAssignNode*) program)->getLeft())->getId()] << ", " << ((intNode*)((orAssignNode*) program)->getRight())->getInt() << std::endl;
        }

        else if((((orAssignNode*) program)->getRight())->getNodeType() == "ident"){
            w << "or " << varToReg[((identNode*)((orAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((orAssignNode*) program)->getRight())->getId()] << ", " << varToReg[((identNode*)((orAssignNode*) program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp = makeName("t");
            CompileRec(temp, ((orAssignNode*) program)->getRight(), w );
            w << "or " << varToReg[((identNode*)((orAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((orAssignNode*) program)->getRight())->getId()] << ", " << temp << std::endl;
        }

    }

    else if(program->getNodeType() == "exclOrAssign"){
        if((((exclOrAssignNode*) program)->getRight())->getNodeType() == "int"){
            w << "xori " << varToReg[((identNode*)((exclOrAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((exclOrAssignNode*) program)->getLeft())->getId()] << ", " << ((intNode*)((exclOrAssignNode*) program)->getRight())->getInt() << std::endl;
        }

        else if((((exclOrAssignNode*) program)->getRight())->getNodeType() == "ident"){
            w << "xor " << varToReg[((identNode*)((exclOrAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((exclOrAssignNode*) program)->getRight())->getId()] << ", " << varToReg[((identNode*)((exclOrAssignNode*) program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp = makeName("t");
            CompileRec(temp, ((exclOrAssignNode*) program)->getRight(), w );
            w << "xor " << varToReg[((identNode*)((exclOrAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((exclOrAssignNode*) program)->getRight())->getId()] << ", " << temp << std::endl;
        }

    }

        else if(program->getNodeType() == "subAssign"){
        if((((subAssignNode*) program)->getRight())->getNodeType() == "int"){
            std::string temp = makeName("t");
            CompileRec(temp, ((subAssignNode*) program)->getRight(), w );
            w << "sub " << varToReg[((identNode*)((subAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((subAssignNode*) program)->getLeft())->getId()] << ", " << temp << std::endl;
        }

        else if((((subAssignNode*) program)->getRight())->getNodeType() == "ident"){
            w << "sub " << varToReg[((identNode*)((subAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((subAssignNode*) program)->getRight())->getId()] << ", " << varToReg[((identNode*)((subAssignNode*) program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp = makeName("t");
            CompileRec(temp, ((subAssignNode*) program)->getRight(), w );
            w << "sub " << varToReg[((identNode*)((subAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((subAssignNode*) program)->getRight())->getId()] << ", " << temp << std::endl;
        }

    }

    else if(program->getNodeType() == "mulAssign"){
        if((((mulAssignNode*) program)->getRight())->getNodeType() == "int"){
            std::string temp = makeName("t");
            CompileRec(temp, ((mulAssignNode*) program)->getRight(), w );
            w << "mul " << varToReg[((identNode*)((mulAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((mulAssignNode*) program)->getLeft())->getId()] << ", " << temp << std::endl;
        }

        else if((((mulAssignNode*) program)->getRight())->getNodeType() == "ident"){
            w << "mul " << varToReg[((identNode*)((mulAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((mulAssignNode*) program)->getRight())->getId()] << ", " << varToReg[((identNode*)((mulAssignNode*) program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp = makeName("t");
            CompileRec(temp, ((mulAssignNode*) program)->getRight(), w );
            w << "mul " << varToReg[((identNode*)((mulAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((mulAssignNode*) program)->getRight())->getId()] << ", " << temp << std::endl;
        }

    }

    else if(program->getNodeType() == "divAssign"){
        if((((divAssignNode*) program)->getRight())->getNodeType() == "int"){
            std::string temp = makeName("t");
            CompileRec(temp, ((divAssignNode*) program)->getRight(), w );
            w << "div " << varToReg[((identNode*)((divAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((divAssignNode*) program)->getLeft())->getId()] << ", " << temp << std::endl;
        }

        else if((((divAssignNode*) program)->getRight())->getNodeType() == "ident"){
            w << "div " << varToReg[((identNode*)((divAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((divAssignNode*) program)->getRight())->getId()] << ", " << varToReg[((identNode*)((divAssignNode*) program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp = makeName("t");
            CompileRec(temp, ((divAssignNode*) program)->getRight(), w );
            w << "div " << varToReg[((identNode*)((divAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((divAssignNode*) program)->getRight())->getId()] << ", " << temp << std::endl;
        }
    }

    else if(program->getNodeType() == "modAssign"){
        if((((modAssignNode*) program)->getRight())->getNodeType() == "int"){
            std::string temp = makeName("t");
            CompileRec(temp, ((modAssignNode*) program)->getRight(), w );
            w << "rem " << varToReg[((identNode*)((modAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((modAssignNode*) program)->getLeft())->getId()] << ", " << temp << std::endl;
        }

        else if((((modAssignNode*) program)->getRight())->getNodeType() == "ident"){
            w << "rem " << varToReg[((identNode*)((modAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((modAssignNode*) program)->getRight())->getId()] << ", " << varToReg[((identNode*)((modAssignNode*) program)->getRight())->getId()] << std::endl;
        }

        else{
            std::string temp = makeName("t");
            CompileRec(temp, ((modAssignNode*) program)->getRight(), w );
            w << "rem " << varToReg[((identNode*)((modAssignNode*) program)->getLeft())->getId()] << ", " << varToReg[((identNode*)((modAssignNode*) program)->getRight())->getId()] << ", " << temp << std::endl;
        }



    }
    //LISTS

    else if(program->getNodeType() == "declarationList"){
        CompileRec(destReg, ((declarationListNode*) program)->getDeclarationList(), w);
        CompileRec(destReg, ((declarationListNode*) program)->getDeclaration(), w);

    }

    else if(program->getNodeType() == "parameterDeclarationList"){
        nodePtr lhs = ((parameterListNode*) program)->getParameterList();

        if (lhs->getNodeType() == "declaration") {
            std::string paramReg = makeNameParam("a");
            CompileRec(paramReg, lhs, w);
        } else {
            CompileRec(destReg, lhs, w);
        }
        std::string paramReg2 = makeNameParam("a");
        CompileRec(paramReg2, ((parameterListNode*) program)->getParameterDeclaration(), w);

    }



   else if(program->getNodeType() == "statementList"){
        CompileRec(destReg, ((statementListNode*) program)->getStatementList(), w);
        CompileRec(destReg, ((statementListNode*) program)->getStatement(), w);
    }

    else if(program->getNodeType() == "translationUnitList"){
        CompileRec(destReg, ((translationUnitListNode*) program)->getTranslationUnit(), w);
        CompileRec(destReg, ((translationUnitListNode*) program)->getExternalDeclaration(), w);
    }

    else if(program->getNodeType() == "expressionList"){
        CompileRec(destReg, ((expressionListNode*) program)->getexpressionList(), w);
        CompileRec(destReg, ((expressionListNode*) program)->getexpression(), w);
    }

    else if(program->getNodeType() == "initializerList"){
        CompileRec(destReg, ((initializerListNode*) program)->getInitializerList(), w);
        CompileRec(destReg, ((initializerListNode*) program)->getInitializer(), w);

    }






    //ARRAYS

    else if(program->getNodeType() == "arraySizeDeclar"){
        // if (((arraySizeDeclarNode*)program)->getSize()->getNodeType() == "int"){
        //     int arraysize = ((intNode*)((arraySizeDeclarNode*)program)->getSize())->getInt();
        //     int arraysizepointer = arraysize * 4;
        //     maxnumberofelements = arraysizepointer;
        //     w << "addi sp, sp, " << arraysizepointer << std::endl;
        // }
        // else{

        // }

    }

   else if(program->getNodeType() == "arrayInitialize"){
        // if (((arrayInitializeNode*)program)->getElement()->getNodeType() == "int"){
        //     elementnumber=elementnumber+1;
        //     std::string arrayregister = makeName("t");
        //     CompileRec(arrayregister, ((arrayInitializeNode*)program)->getElement(), w);
        //      w << "sw " << arrayregister << -(maxnumberofelements-elementnumber*4) << "(sp)" << std::endl;
        // }
        // else{

        // }
   }

    else if(program->getNodeType() == "arrayDeclar"){

    }

    else if(program->getNodeType() == "arrayIndex"){
        // if (((arrayIndexNode*)program)->getIndex()->getNodeType() == "int"){

        //     int index = ((intNode*)((arrayIndexNode*)program)->getIndex())->getInt();
        //     w << "lw " << varToReg[((identNode*)((arrayIndexNode*)program)->getDeclarator())->getId() ] << ", -" << maxnumberofelements-index*4 << "(sp)" << std::endl;
        // }
        // else{

        // }

    }






    //MISC




    //if doesn't match any of these node types...

    else{
        throw std::runtime_error("Unknown construct '"+program->getNodeType()+"'");
    }

}

void Compile(nodePtr program, std::ostream &w)
{
    w << ".text" << std::endl;
    // Compile the whole thing

    CompileRec("a0", program, w);

}



//1000! :)
