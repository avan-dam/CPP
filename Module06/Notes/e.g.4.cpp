int main(void)
{
    int a = 42; // reference value

    double b = a; // implicit promotion -> ok 
    int c = b;//implicit demotion ->hell no
    int d = static_cast<int>(b);//explicit demotion -> ok I obey
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    return (0);
}