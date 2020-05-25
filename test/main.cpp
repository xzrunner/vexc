#define CATCH_CONFIG_RUNNER
#include <catch/catch.hpp>

#include <cslang/Type.h>
#include <cslang/BuildInFuncs.h>

int main(int argc, char* argv[])
{
    cslang::SetupTypeSystem();
    cslang::SetupBuildInFuncs();

    int result = Catch::Session().run(argc, argv);

    // global clean-up...

    return result;
}