#include "tax_calculator.h"

tax_calculator::tax_calculator()
{

    float after_tax_amount;


    float getGST(pre_tax_amount)
    {
        float gstP;
        float gst;

        gstP = 5.0f;
        gst = pre_tax_amount / 100 * 100;

        return gst;

    }

    float getPST(pre_tax_amount)
    {
        float pstP;
        float pst;

        pstP = 9.975f;
        pst = pre_tax_amount / 100 * 100;

        return pst;
    }


    float getTotal(pre_tax_amount, gst, pst)
    {
        after_tax_amount = pre_tax_amount + gst + pst;

        return after_tax_amount;
    }

    return 0;
}
