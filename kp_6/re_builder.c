#include <stdio.h>
#include "../kp_6/data.h"
#include "../kp_6/re_builder.h"

select_type *re_build(select_type slct, select_type *tmp)
{
    if (!tmp)
    {
        slct.last = NULL;
        slct.next = NULL;
        tmp = &slct;
        return tmp;
    }
    else
    {
        slct.last = tmp;
        tmp->next = &slct;
        return (tmp->next);
    }
}
