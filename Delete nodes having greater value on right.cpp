class Solution
{
public:
    Node *compute(Node *head)
    {
        if (!head || !head->next)
            return head;

        Node *current = head;
        Node *prev = nullptr;
        Node *newHead = nullptr;
        Node *newTail = nullptr;

        while (current)
        {
            bool shouldKeep = true;
            Node *temp = current->next;

            while (temp)
            {
                if (temp->data > current->data)
                {
                    shouldKeep = false;
                    break;
                }
                temp = temp->next;
            }

            if (shouldKeep)
            {
                if (!newHead)
                {
                    newHead = current;
                    newTail = current;
                }
                else
                {
                    newTail->next = current;
                    newTail = current;
                }
            }

            current = current->next;
        }

        if (newTail)
            newTail->next = nullptr;

        return newHead;
    }
};
