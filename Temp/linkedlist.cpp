#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list {
    int val;
    struct linked_list *next;
} LL;

LL *head, *tail;

void tail_insert(int v)
{
    if(head==NULL)
    {
        head = (LL *)malloc(sizeof(LL));
        head->val = v;
        head->next = NULL;
        tail = head;
    }
    else
    {
        LL *temp = (LL *)malloc(sizeof(LL));
        temp->val = v;
        temp->next = NULL;
        tail->next = temp;
        tail = tail->next;
    }
}

void head_insert(int v)
{
    if(head==NULL)
    {
        head = (LL *)malloc(sizeof(LL));
        head->val = v;
        head->next = NULL;
        tail = head;
    }
    else
    {
        LL *temp = (LL *)malloc(sizeof(LL));
        temp->val = v;
        temp->next = head;
        head = temp;
    }
}

void insert_before(int v, int n) // insert v before every n
{
    LL *curr, *temp;
    if(head!=NULL)
    {
        if(head->val==n)
        {
            temp = (LL *)malloc(sizeof(LL));
            temp->val = v;
            temp->next = head;
            head = temp;
            curr = head->next;
        }
        else curr = head;
        while(curr->next!=NULL)
        {
            if(curr->next->val==n)
            {
                temp = (LL *)malloc(sizeof(LL));
                temp->val = v;
                temp->next = curr->next;
                curr->next = temp;
                curr = curr->next;
            }
            curr = curr->next;
        }
    }
}

void insert_after(int v, int n) // insert v after every n
{
    LL *curr, *temp;
    if(head!=NULL)
    {
        curr = head;
        while(curr!=NULL)
        {
            if(curr->val==n)
            {
                temp = (LL *)malloc(sizeof(LL));
                temp->val = v;
                temp->next = curr->next;
                if(curr->next==NULL) tail = temp;
                curr->next = temp;
                curr = curr->next;
            }
            curr = curr->next;
        }
    }
}

void sort_linked_list()
{
    LL *i, *j, *k;
    int temp;
    k = tail;
    for(i=head; i!=tail; i=i->next)
    {
        for(j=head; ;j=j->next)
        {
            if(j->val > j->next->val)
            {
                temp = j->val;
                j->val = j->next->val;
                j->next->val = temp;
            }
            if(j->next==k)
            {
                k = j;
                break;
            }
        }
    }
}

void delete_all(int v) // deletes every v
{
    LL *temp, *curr = head;
    while(head!=NULL && head->val==v)
    {
        temp = head;
        head = head->next;
        free(temp);
        curr = head;
    }
    if(curr==NULL) return;
    while(curr->next!=NULL)
    {
        if(curr->next->val==v)
        {
            temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
            if(curr->next==NULL) tail = curr;
        }
        else curr = curr->next;
    }
}

int search_linked_list(int v)
{
    LL *curr = head;
    int n = 0;
    while(curr!=NULL)
    {
        if(curr->val==v) return n;
        n++;
        curr = curr->next;
    }
    return -1;
}

void print_linked_list()
{
    LL *curr = head;
    while(curr!=NULL)
    {
        printf("%d ", curr->val);
        curr = curr->next;
    }
    printf("\n");
}

int main()
{
    int i, n, v;

    // insert at the end
    for(i=1; i<=5; i++)
        tail_insert(5);
    print_linked_list();

    // insert at the beginning
    for(i=1; i<=5; i++)
        head_insert(i);
    print_linked_list();

    for(i=1; i<5; i++)
    {
        scanf("%d %d", &n, &v);
        // insert v before every n
        insert_before(v, n);
        print_linked_list();
    }

    for(i=1; i<5; i++)
    {
        scanf("%d %d", &n, &v);
        // insert v after every n
        insert_after(v, n);
        print_linked_list();
    }

    // sort the list with bubble sort
    sort_linked_list();
    print_linked_list();

    for(i=0; i<5; i++)
    {
        scanf("%d", &v);
        // delete all v in the list
        delete_all(v);
        print_linked_list();
    }

    for(i=0; i<5; i++)
    {
        scanf("%d", &v);
        // see if there is v in the list
        n = search_linked_list(v);
        if(n==-1) printf("not found\n");
        else printf("found at %d\n", n);
    }
    return 0;
}
