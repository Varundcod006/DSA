#include <stdio.h>

void atfront(){

    struct node{
        int data;
        struct node *next;
    };


    struct node *HeadNode = malloc(sizeof(struct node));

    struct node *NodeA = malloc(sizeof(struct node));
    struct node *NodeB = malloc(sizeof(struct node));

    HeadNode -> data = 25;
    HeadNode -> next = &NodeA;

    NodeA -> data = 50;
    NodeA -> next = &NodeB;

    NodeB -> data = 70;
    NodeB -> next = NULL;

    // Adding Address Of Head Node

    // struct node NodeA, NodeB, NodeC;

    // NodeA.data = 168;
    // NodeA.next = &NodeB;

    // NodeB.data = 361;
    // NodeB.next = &NodeC;

    // NodeC.data = 354;
    // NodeC.next = NULL;
  
}