#ifndef CLIENTTCP_I_IMPL_H
#define CLIENTTCP_I_IMPL_H

#include "Clienttcp_base.h"

class Clienttcp_i : public Clienttcp_base
{
    ENABLE_LOGGING
    public:
        Clienttcp_i(const char *uuid, const char *label);
        ~Clienttcp_i();
        void start() throw (CF::Resource::StartError, CORBA::SystemException);
        int Clienttcp();
        void constructor();

        int serviceFunction();

    protected:
};

#endif // CLIENTTCP_I_IMPL_H
