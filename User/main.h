#ifndef __mani_h
#define __mani_h
typedef enum
{
  LED_NULL = 0,
  LED_PWR_ON, // 上电模式,禁止调光
  LED_ADJ_P,  // 调光模式+
  LED_ADJ_S,  // 调光模式-
} LED_S;

extern LED_S led_state;
extern volatile u8 adjust_pwm_during_pwr_on;
extern volatile double pwr_on_step; // 开机缓启动的步长

// extern volatile u8 user_debug_ms_cnt; // 测试用

#endif