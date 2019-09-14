#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;


// Можете использовать.
static const char * alphabet = "0123456789ABCDEF";



std::string to_system( int num, int base )
{
    assert( base >= 2 && base <= 16 );
    
    vector< char > output;
    
    int temp = abs( num );
    while ( temp >= base )
    {
        output.push_back( alphabet[ temp % base ] );
        temp /= base;
    }
    output.push_back( alphabet[ temp ] );
    if ( num < 0 ) output.push_back('-');

    string out_str( output.rbegin(), output.rend() );
//    for ( auto i = output.begin(); i != output.end(); ++i )
//        cout << *i;
//    cout << endl;

    return out_str;

    //throw runtime_error("to_system Not implemented.");
}


int main()
{
    cout << "0 in 16th system == " << to_system(0, 16) << endl;
    cout << "-0 in 12th system == " << to_system(-0, 12) << endl;
    cout << "1 in 2th system == " << to_system(1, 2) << endl;
    cout << "109 in 2th system == " << to_system(109, 2) << endl;
    cout << "-12 in 3th system == " << to_system(-12, 3) << endl;
    cout << "136 in 4th system == " << to_system(136, 4) << endl;

    cout << "10 in 10th system == " << to_system(10, 10) << endl;
    cout << "-10 in 10th system == " << to_system(-10, 10) << endl;
    
    cout << "10 in 2th system == " << to_system(10, 2) << endl;

    cout << "10 in 3th system == " << to_system(10, 3) << endl;
    cout << "42 in 16th system == " << to_system(42, 16) << endl;
    cout << "64 in 16th system == " << to_system(64, 16) << endl;
    cout << "239 in 16th system == " << to_system(293, 16) << endl;


    /*assert( to_system(10, 10) == "10" );
    assert( to_system(-10, 10) == "-10" );

    assert( to_system(10, 2) == "1010" );

    assert( to_system(10, 3) == "11" );     // 101
    assert( to_system(11, 3) == "12" );     // 102
    assert( to_system(-12, 3) == "-20" );   // -110

    assert( to_system(42, 16) == "2A" );*/

    // to_system(12, 17)  -- ошибка по assert.

    return 0;
}
