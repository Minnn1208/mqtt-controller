#include "esp_event.h"
#include "esp_netif.h"
#include "esp_system.h"
#include "freertos/FreeRTOS.h"
#include "freertos/event_groups.h"
#include "esp_wifi.h"

#include "esp_log.h"

#ifndef _WIFI_H__
#define _WIFI_H__ 

#define WIFI_CONNECTED_BIT              BIT0
#define WIFI_FAIL_BIT                   BIT1

#define ESP_WIFI_SSID                   CONFIG_ESP_WIFI_SSID
#define ESP_WIFI_PASSWORD               CONFIG_ESP_WIFI_PASSWORD
#define ESP_MAXIMUM_RETRY               5





void wifi_init_sta(void);

#endif