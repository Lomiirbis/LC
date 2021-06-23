#include <iostream>
#include <cstdint>

class RGBA
{
 public:
    /*std::uint8_t m_red;
    std::uint8_t m_green;
    std::uint8_t m_blue;
    std::uint8_t m_alpha;*/
    int m_red;
    int m_green;
    int m_blue;
    int m_alpha;


    void print()
    {
        std::cout << +m_red << "_" << +m_green << "_" << +m_blue << "_" << +m_alpha << "\n";
        std::cout;
    }

    void ChRGBA()
    {
        std::cout << "RED(0-255) :";
        std::cin >> m_red;
        std::cout << "GREEN(0-255) :";
        std::cin >> m_green;
        std::cout << "BLUE(0-255) :";
        std::cin >> m_blue;
        std::cout << "ALPHA(0-255) :";
        std::cin >> m_alpha;
    }

    void SetRGBA(int red, int green, int blue, int alpha)
    {
        /*std::uint8_t m_red = red;
        std::uint8_t m_green = green;
        std::uint8_t m_blue = blue;
        std::uint8_t m_alpha = alpha;*/
        m_red = red;
        m_green = green;
        m_blue = blue;
        m_alpha = alpha;
    }
};





int main()
{
    RGBA first;
    first.SetRGBA (0, 0, 0, 255);
    first.print();
    first.ChRGBA();
    first.print();

    return 0;
}
