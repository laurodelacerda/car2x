
#ifndef GPS_BASEGPS_H_
#define GPS_BASEGPS_H_

#include "veins/modules/mobility/traci/TraCICommandInterface.h"

using Veins::TraCICommandInterface;

class BaseGPS {

public:
    virtual std::string getCourse(int maxNumberOfRoads) = 0;
    virtual bool onRoute(std::string course) = 0;

protected:
    TraCICommandInterface::Vehicle* traciVehicle;
};

#endif /* GPS_BASEGPS_H_ */
