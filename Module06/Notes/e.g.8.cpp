int main(void)
{
    int a = 42;                     //reference value

    int const *b = &a;                       //implicit promotion ->ok
    // int * c = b;                            //explicit demotion ->HELL NO
    int * d = const_cast<int *>(b);         //explicit demotion -> ok 
    return 0;
}