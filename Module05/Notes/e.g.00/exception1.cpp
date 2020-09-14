#include <stdexcept>

void test1()
{
    try
    {
        if (/* theres an error */)
        {
            throw std::exception();
        }
        else
        {
            //do soemthing else
        }
    }
    catch (std::exception e)
    {
        //handle the error here
    }
}

void    test2()
{
    //Do some stuff here
    if (/* theres an error */)
    {
        throw std::exception();
    }
    else
    {
        //do some more stuff
    }
}

void    test3()
{
    try
    {
        test2();
    }
    catch (std::exception& e)
    {
        //handle error
    }
}

void    test4()
{
    class PEBKACException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("Problem exists between keyboard and chair");
            }
    };
    try
    {
        test3();
    }
    catch (PEBKACException& e)
    {
        //handle the fact that the user is an idiot
    }
    catch (std::exception& e)
    {
        //handle other exceptions that are like std::exception
    }
}