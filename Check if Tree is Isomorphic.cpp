class Solution{
  public:
    // Return True if the given trees are isomotphic. Else return False.
    bool isIsomorphic(Node *root1,Node *root2)
    {
    //add code here.
    if(root1 == NULL && root2 == NULL){   //checking id roots are null
        return true;
    }
    if(root1 == NULL || root2 == NULL){   //if one root is null
        return false;
    }
    if(root1->data != root2->data){    //if root itselfs are not equal
        return false;
    }
    return (isIsomorphic(root1->left, root2->left) && isIsomorphic(root1->right, root2->right)) || (isIsomorphic(root1->left, root2->right) && isIsomorphic(root1->right, root2->left));
    }   //iterating to each root's left and right child
};
