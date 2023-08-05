#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}
int isBST(struct  node* root){
    static struct node * prev =NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev != NULL && root->data <= prev->data){
            return 0;
        }
        prev=root;
        return isBST(root->right);
    }
    else    
        return 1; 
}
struct node * search(struct node* root, int key){
    if(root==NULL){
        return NULL;
    }
    if(key==root->data){
        return root;
    }
    else if(key<root->data){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}
void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
struct node * inorderpre(struct node *root){
    root = root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
struct node *deleatnode(struct node *root, int value){
    struct node *ipre;
    if(root==NULL)
        return NULL;
    if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL;
    }
    // search for node to deleat
    if(value < root->data)
        root->left=deleatnode(root->left,value);
    else if(value>root->right)
        root->right=deleatnode(root->right,value);
    else{
        ipre=inorderpre(root);
        root->data=ipre->data;
        root->left= deleatnode(root->left,ipre->data);
    }
    return root;
}

int main(){
     
    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4  

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    inOrder(p);
    printf("\n");
    deleatnode(p,3);
    inOrder(p);

    
 
    return 0;
}
