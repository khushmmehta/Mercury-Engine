#include <vk_engine.h>

int main(int argc, char* argv[])
{
	MercuryEngine engine;

	engine.init();	
	
	engine.run();	

	engine.cleanup();	

	return 0;
}
