#include <iostream>

#include <assert.h>

using namespace std;


// Можете использовать.
static const char * alphabet = "0123456789ABCDEF";



std::string to_system( int num, int base )
{
    assert( base >= 2 && base <= 16 );

    // Вместо этого, написать свою реализацию.
    throw runtime_error("to_system Not implemented.");
}


int main()
{
    cout << "1 in 2th system == " << to_system(1, 2) << endl;

    assert( to_system(10, 10) == "10" );
    assert( to_system(-10, 10) == "-10" );

    assert( to_system(10, 2) == "1010" );

    assert( to_system(10, 3) == "11" );
    assert( to_system(11, 3) == "12" );
    assert( to_system(-12, 3) == "-20" );

    assert( to_system(42, 16) == "2A" );

    // to_system(12, 17)  -- ошибка по assert.

    return 0;
}
