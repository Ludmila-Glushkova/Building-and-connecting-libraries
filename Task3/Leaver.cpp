#include "Leaver.h"

namespace Leaver
{
	std::string Leaver::leave(const std::string& s)
	{
		std::string farewell = "Bye, " + s + "!";
		return farewell;
	}
}