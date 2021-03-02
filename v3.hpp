#include <cstdio>
//initialize vector class
class v3
{
    public:
    v3();
    v3(char* bin); //create an instance of v3 from binary data in STL
    v3(double x, double y, double z);
    ~v3();

    double m_x, m_y, m_z;
};