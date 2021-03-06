#include "libmx.h"

void mx_pop_back(t_list **list) {
    t_list *p;

    if (NULL == list || NULL == *list)
        return;
    p = *list;
    if (NULL == p->next) {
        free(p);
        *list = NULL;
    }
    else {
        while (NULL != p->next->next)
            p = p->next;
        free(p->next);
        p->next = NULL;
    }
}
