int main(void)
{
    float a = 420.042f;                     //reference value

    void *b = &a;                           //implicit promotion ->ok
    int * c = reinterpret_cast<int *>(b);   //explicit demotion ->Ok I okay
    int & d =reinterpret_cast<int &>(b);    //explicit demotion ->ok 
    return 0;
}