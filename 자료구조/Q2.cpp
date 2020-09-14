#include "Polynomial.h"
#include "SparsePoly.h"

int main(int argc, char const *argv[])
{
    // Polynomial a, b, c;
    // a.read();ı
    // b.read();
    // c.add(a, b);
    // a.display("A = ");
    // b.display("B = ");
    // c.display("A + B = ");

    SparsePoly a, b, c;
    a.read();
    b.read();
    a.print();
    b.print();
    c.add(a, b);
    c.display();
    c.print();
    return 0;
}
