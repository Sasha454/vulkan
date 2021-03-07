#include <vulkan.hpp>
#include <stdio.h>

int main()
{
    vk::InstanceCreateInfo instCI;
    vk::Instance inst;
    vk::Result retVal = vk::createInstance(&instCI, nullptr, &inst);    
    
    printf("%d\n", retVal);
}
