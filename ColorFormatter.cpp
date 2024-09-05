#include "ColorFormatter.h"
#include "ColorPair.h"
#include <map>

using namespace TelCoColorCoder;

std::string ColorFormatter::printcolorcodes()
{
	std::string colorcodes;
	std::map<int, std::string> colorpairs;

 for (auto pairNumber = 1; pairNumber <= 25; pairNumber++)
 {
	 auto color = ColorPair::GetColorFromPairNumber(pairNumber);
	 colorpairs[pairNumber] = color.ToString();
 }
 for (auto itr :colorpairs)
 {
	 colorcodes.append(std::to_string(itr.first));
	 colorcodes.append("--");
	 colorcodes.append(itr.second);
	 colorcodes.append("\n");
 }
 return colorcodes;
}
