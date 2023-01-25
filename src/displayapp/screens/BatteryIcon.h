#pragma once
#include <cstdint>
#include <lvgl/src/lv_core/lv_obj.h>

namespace Pinetime {
  namespace Applications {
    namespace Screens {
      class BatteryIcon {
      public:
        void Create(lv_obj_t* parent);

        void SetColor(lv_color_t);
        void SetBatteryPercentage(uint8_t percentage);
        void SetCharging(bool charging);
        lv_obj_t* GetObject();

        static const char* GetUnknownIcon();
        static const char* GetPlugIcon(bool isCharging);

      private:
        lv_obj_t* batteryImg;
        lv_obj_t* batteryChargingImg;
        lv_obj_t* batteryJuice;
      };
    }
  }
}
