#include <stdio.h>
#include "../lab23/self_similarity.h"
#include "../lab23/data.h"

int proof(cell *tmp1, cell *tmp2)
{
    int check;
    check = (tmp2->value - 48) % (tmp1->value - 48);
    if (check == 0)
    {
    	if (tmp1->left && tmp2->right && !tmp1->right && !tmp2->left)
    	{
    	    return proof(tmp1->left, tmp2->right);
    	}
    	if (!tmp1->left && !tmp2->right && tmp1->right && tmp2->left)
    	{
    	    return proof(tmp1->right, tmp2->left);
    	}
    	if (tmp1->left && tmp2->right && tmp1->right && tmp2->left)
    	{
    	    return (proof(tmp1->right, tmp2->left) && proof(tmp1->left, tmp2->right));
    	}
    	if (!tmp1->left && !tmp2->right && !tmp1->right && !tmp2->left)
    	{
    	    return 1;
    	}
    	else return 0;
    }
    else return 0;
}
