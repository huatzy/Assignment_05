DoubleSubscriptedArray::DoubleSubscriptedArray(int r,int c):
    row(r),column(c)
    {
        if(r == 0 || c == 0)
            ptr = NULL;
        else {
            int i;
            ptr = new int*[r];
            for(i = 0; i < r; ++i)
                ptr[i] = new int[c];
        }
    }

int & DoubleSubscriptedArray::chessBorard(int r,int c)
{
    return ptr[r][c];
}
