#include "ChargerAdapter.h"
#include "SensorHal.h"

ChargerAdapter::ChargerAdapter(chg_info_t *info) {
  this->info = info;
}
