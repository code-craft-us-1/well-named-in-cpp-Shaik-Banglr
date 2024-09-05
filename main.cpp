#include "ColorPairTest.h"
#include "ColorFormatter.h"

int main() 
{
    ColorFormatter obj;
    std::cout<<obj.printcolorcodes();
    std::cout << "\n\n";

    std::cout << "RUNNIG TESTS\n\n";
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
    return 0;
}