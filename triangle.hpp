//create triangle class
#include <v3.hpp>

class tri
{
    public:
    tri();
    tri(v3 p1, v3 p2, v3 p3);
    void draw();
    ~tri();

    v3 m_p1, m_p2, m_p3;
};
