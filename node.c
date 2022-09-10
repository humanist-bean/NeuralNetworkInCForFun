/* Node.c - for Neural Network in C For Fun
 * by: Alder French
 * 
 * Description: This Node will be the data structure for a mid level node in 
 * the Neural Network i.e. it is not an input or output Node, although the
 * input and output node may benefit by having one of these Nodes.
 * 
 * Credit: C and Data Structures by Professor Joe Sventek and Neural Networks
 * and Deep Learning by Michael Nealson
 *
 * Architecture...
 *
 * Variables: Weight, Bias
 *
 * Functions: Sigmoid, Gradient Descent?
 *
 *
 *
 */

#include "node.h"
#include <stdlib.h>


typedef struct node_data {
	float bias;
	float weight;
	// free value function pointer here ? (see ADTs book)
} NodeData;

// Functions that go within Node Data Structure

//Sigmoid function for compressing output
static float sigmoid(const Node *node){
	
}


// Template for Node Data Structure
static Node template = {
	NULL, sigmoid
};
// Function that CREATES Node Data Structure
const Node *Node_create{
	Node *node = (Node *)malloc(sizeof(Node));

	if(node != NULL){
		NodeData *nd = (NodeData *)malloc(sizeof(NodeData));
		
		if(nd != NULL){
			nd->bias = 1.0f;
			nd->weight = 1.0f;
			*node = template;
			node->self = nd;
		}else{
			free(nd);
			free(node);
			node = NULL;
		}
	}else{
		free(node);
		node = NULL;
	}
	return node;
}


