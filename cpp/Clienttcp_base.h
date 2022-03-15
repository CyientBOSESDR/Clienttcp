#ifndef CLIENTTCP_BASE_IMPL_BASE_H
#define CLIENTTCP_BASE_IMPL_BASE_H

#include <boost/thread.hpp>
#include <ossie/Component.h>
#include <ossie/ThreadedComponent.h>


class Clienttcp_base : public Component, protected ThreadedComponent
{
    public:
        Clienttcp_base(const char *uuid, const char *label);
        ~Clienttcp_base();

        void start() throw (CF::Resource::StartError, CORBA::SystemException);

        void stop() throw (CF::Resource::StopError, CORBA::SystemException);

        void releaseObject() throw (CF::LifeCycle::ReleaseError, CORBA::SystemException);

        void loadProperties();

    protected:

    private:
};
#endif // CLIENTTCP_BASE_IMPL_BASE_H
