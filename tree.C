#include <stdio.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
void preorder(struct node* root){
    if(root==nullptr){
        return;
    }
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
    }
void inorder(struct node* root){
    if(root==nullptr){
        return;
    }
    preorder(root->left);
    printf("%d",root->data);
    preorder(root->right);
}
void postorder(struct node* root){
    if(root==NULL){
        return;
    }
    preorder(root->left);
    preorder(root->right);
    printf("%d",root->data);
}
int ans=0;
int maxi(struct node* root){
    if(root==NULL){
        return;
    }
    int k=root->data;
    if(k>ans){
        ans=k;
    }
    maxi(root->left);
    maxi(root->right);
}
int main(){

}
