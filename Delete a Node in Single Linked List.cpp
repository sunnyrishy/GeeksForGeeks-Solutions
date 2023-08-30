Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(x<=0){
        return head;
    }
    
    if(x==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    
    Node* curr = head;
    for(int i = 1; i < x-1 && curr != nullptr; i++){
        curr = curr->next;
        
    }
    
    if(curr == nullptr || curr->next == nullptr){
        return head;
    }
    
    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;
    return head;
    
}
