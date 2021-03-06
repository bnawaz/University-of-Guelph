/*
#NAME: Mike Sadowski
#DATE: October 28th, 2014
#STUDENT ID: 0864810
#ASSIGNEMNT: Data Structures Assignment 3
*/

#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

void buildTheTree(char *equation)
void insert_to_tree(char data);

typedef struct TreeNode
{
	char data;
	
	struct TreeNode *left;
	struct TreeNode *right;
}TreeNode;

typedef struct StackNode
{	
	TreeNode *node;
	struct StackNode *next;
}StackNode;

typedef struct Tree
{
	StackNode *top;
}Tree;
/*Build the tree, adding each operand and operator to the tree*/
void buildTheTree(Tree *tree, char *equation)
{
	for (i = strlen(equation); i > 0 ; i--)
	{
		insert_to_tree(tree, equation[i]);
	} 
}

/*Check if element is operand or operator, attach to the tree accordingly*/
void insert_to_tree(Tree *tree, char data)
{
	TreeNode newNode;	

	/*Check if data is a operand or operator*/
	if(data >= '0' && data <= '9')
	{
		newNode.data = data;
	}
	else if (data == '+' || data == '-' || data == '*' || data == '/')
	{
		newNode.left = pop();
		newNode.right = pop();
		push(newNode);		
	}
	else
	{
		printf("ERROR WITH EXPRESSION");
	}
}

/*push a node onto the tree, starting from the bottom*/
void push(Tree *tree, TreeNode *newNode)
{
	StackNode *newStackNode;
 
	if(tree.top == NULL)
	{
		top = newNode;
	}
	else
	{
		newStackNode.next = top;
		top = newStackNode;
	}
}

Tree *pop(Tree *tree)
{
	if(tree.top == NULL)
	{
		top = newNode;
	}

}


