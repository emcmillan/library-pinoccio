#ifndef LIB_PINOCCIO_SCOUT_H_
#define LIB_PINOCCIO_SCOUT_H_

#include <Pinoccio.h>
#include <Backpack.h>

#include "utility/phy.h"
#include "utility/hal.h"
#include "utility/sys.h"
#include "utility/nwk.h"
#include "utility/halFuelGauge.h"
#include "utility/halRgbLed.h"

class PinoccioScout : public PinoccioClass {

  public:
    PinoccioScout();
    ~PinoccioScout();

    void setup();
    void loop();

    bool isBatteryCharging();
    float getBatteryPercentage();
    float getBatteryVoltage();

    void enableBackpackVcc();
    void disableBackpackVcc();

    friend class LeadScout;

  protected:
    uint16_t leadScoutAddress;   
    Backpack* backpacks[3];
};

extern PinoccioScout Scout;

#endif