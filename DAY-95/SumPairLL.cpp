#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

int countPairs(struct Node* head1, struct Node* head2,
               int x)
{
    int count = 0;

    unordered_set<int> us;

    while (head1 != NULL)
    {
        us.insert(head1->data);

        head1 = head1->next;
    }

    while (head2 != NULL)
    {
        if (us.find(x - head2->data) != us.end())
            count++;

        head2 = head2->next;
    }
    return count;
}

int main()
{
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;

    push(&head1, 7);
    push(&head1, 5);
    push(&head1, 1);
    push(&head1, 3);

    push(&head2, 3);
    push(&head2, 5);
    push(&head2, 2);
    push(&head2, 8);

    int x = 10;

    cout << "Count = "
         << countPairs(head1, head2, x);
    return 0;
}
