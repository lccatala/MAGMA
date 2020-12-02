#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <functional>
#include <cstdlib>
#include <vector>
#include <stdexcept>
#include <iostream>

#include "TriangleApp.h"

int main()
{
    TriangleApp app;
    try
    {
        app.Run();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
