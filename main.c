#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data; //data of the node
    struct node *nextPtr; //address of the next node
};

struct node *startNode;

//function to create the list
static void createNodeList(int totalNodes);
static void displayList();

int main()
{
    int numberOfNodes;

    printf("Input the number of nodes: ");
    scanf("%d ", &numberOfNodes);
    createNodeList(numberOfNodes);
    displayList();
    return 0;
}

static void createNodeList(int totalNodes)
{
    struct node *newNode;
    struct node *nodeBuffer;
    int nodeData;
    int nodeCounter;

    //allocate memory for starting node
    startNode = (struct node*)malloc(sizeof(struct node));

    //exit if no memory has been allocated
    if(startNode == NULL)
    {
        printf("memory cannot be allocated.");
        return;
    }
    else
    {
        printf("input data for node %d : ", 1);
        scanf("%d", &nodeData);

        //save user input to the data element of the node
        startNode->data = nodeData;
        //initialize the nodes next pointer to null
        startNode->nextPtr = NULL;
        //Point the buffer to address of the first node

        nodeBuffer = startNode;
        //use loop to fill the rest of the node
        // printf(nodeCounter);return;
        for(nodeCounter =2; nodeCounter<=totalNodes; nodeCounter++)
        {

            newNode = (struct node*)malloc(sizeof(struct node));

            //exit if new node cannot be allocated
            if(newNode == NULL)
            {
                printf("Memory cannot be allocated.");
                break;
            }
            else
            {
                printf("input data for node %d: ",nodeCounter);
                scanf("%d", &nodeData);

                newNode->data = nodeData;
                newNode->nextPtr = NULL;

                //Link the previous node to the current node
                nodeBuffer->nextPtr = newNode;
                //copies address of current node
                nodeBuffer = nodeBuffer->nextPtr;
            }

        }
    }

}



static void displayList(){
    struct node *nodeBuffer;
    nodeBuffer = startNode;

    //exit if it is empty

    if(nodeBuffer == NULL){
        printf("List is empyt");
        return 0;
    }
    else{

        //check if the current node is empty
        while (nodeBuffer != NULL)
        {
            //PRINT THE DATA OF CRRENT NODE
            printf("DATA: %d \n", nodeBuffer->data);

            //go to the next node
            nodeBuffer = nodeBuffer->nextPtr;

        }

    }
}

//create struct to hold the list
//declare a pointer for the starting node
//declare a function prototype
//create definition of the function
//inside the function declare a pointer for creating new nodes
//declare a variable for temporarily holding nodes
//declare a variable to hold user inputs
//declare variable for counting nodes
//allocate memorry for starting node
//check if memory allocation was successful, if not exit
//if memory allocation was successfull ask for input of first node
//copy user input to data element of the node
//initialize the nodes nextptr element to null
//point the buffer to the first address of the node
//use loop to fill the rest of the node
//check if memory was successfully allocated to the new node, if not exit
//if memory allocation was successfull reqest another ser input
//assign user input to the nodes data element and initialize ndoes nextPtr to null
//link the earlier node to the new node
//point the buffer pointer to the address of the current node
//declare function prototype for displaying the data of the nodes

//implement function
//declare temporary pointer to the node
//point the temp node pointer to the first node of the list of nodes

//check if the  list is note empty
//if not empty, loop through all the nodes to the last
//print current node
//move to next node
//in the main program declare a var to hold number of nodes to create
//ask the user to input for total number of nodes
//create a list of nodes
