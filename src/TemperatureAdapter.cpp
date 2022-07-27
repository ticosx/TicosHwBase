#include "TemperatureAdapter.h"
#include "SensorHal.h"

TemperatureAdapter::TemperatureAdapter(temp_info_t *info) {
  this->info = info;
}
