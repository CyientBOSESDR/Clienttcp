#include <iostream>
#include "ossie/ossieSupport.h"

#include "Clienttcp.h"
int main(int argc, char* argv[])
{
    Clienttcp_i* Clienttcp_servant;
    Component::start_component(Clienttcp_servant, argc, argv);
    return 0;
}

