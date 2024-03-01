// interface can extends another interface
interface Demo
{
    void fun();
}

interface Hello extends Demo
{
    void gun();
}

class Marvellous implements Hello  // Both fun and gun body must Implements
{
    public void fun()
    {}
    public void gun()
    {}
}