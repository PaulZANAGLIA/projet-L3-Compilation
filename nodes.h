#include "table_symb.h"
#include <stdarg.h>

typedef enum {
        apDebut,
        apPrimaryExpression,
        apPostfixExpression,
        apArgumentExpressionList,
        apUnaryExpression,
        apUnaryOperator,
        apMultiplicativeExpression,
        apAdditiveExpression,
        apRelationalExpression,
        apEqualityExpression,
        apLogicalAndExpression,
        apLogicalOrExpression,
        apExpression,
        apDeclaration,
        apDeclarationSpecifiers,
        apTypeSpecifier,
        apStructSpecifier,
        apStructDeclarationList,
        apStructDeclaration,
        apDeclarator,
        apDirectDeclarator,
        apParameterList,
        apParamaterDeclaration,
        apStatement,
        apCompoundStatement,
        apACCOO,
        apACCOF,
        apDeclarationList,
        apStatementList,
        apExpressionStatement,
        apSelectionStatement,
        apIterationStatement,
        apJumpStatement,
        apProgram,
        apExternalDeclaration,
        apFunctionDefinition,
        apIDENTIFIER,
        apCONSTANT,
        apSIZEOF,
        apPTR_OP,
        apLE_OP,
        apGE_OP,
        apEQ_OP,
        apNE_OP,
        apAND_OP,
        apOR_OP,
        apEXTERN,
        apINT,
        apVOID,
        apPlus,
        apMoins,
        apMultiplication,
        apDivision,
        apMoinsUnaire,
        apEtoile,
        apParantheseO,
        apParantheseF,
        apSuperieur,
        apInferieur,
        apPoint,
        apVirgule,
        apOpEt,
        apPointVirgule,
        apEgal,
        
} node_type;

typedef struct node_ {
        char * name;
        node_type type;
        struct nodes_list_ * children;
        symbole_t * symb;
} node_t;

typedef struct nodes_list_ {
        struct node_ * first;
        struct nodes_list_ * next;
}nodes_list_t;

node_t * create_node(char * name, nodes_list_t * nodesList);
nodes_list_t * mergeNodes(int nbPara, ...);
void outputTree(node_t * treePtr, int spaces);
nodes_list_t * pushNode(nodes_list_t * t, node_t * n);