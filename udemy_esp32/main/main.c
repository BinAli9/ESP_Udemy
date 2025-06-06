/**
 * Application entry point
 */
#include "freertos/FreeRTOS.h"
#include "esp_wifi.h"
#include "esp_system.h"
#include "esp_event.h"
#include "esp_event_loop.h"
#include "nvs_flash.h"
#include "driver/gpio.h"
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>


#include "bme680_sensor.h"
#include "portmacro.h"
#include "rgb_led.h"

void app_main(void)
{
	while (true)
	{
		rgb_led_wifi_app_started();
		vTaskDelay (1000 /portTICK_PERIOD_MS);
		rgb_led_http_server_started();
		vTaskDelay (1000 /portTICK_PERIOD_MS);
		rgb_led_wifi_connected();
		vTaskDelay (1000 /portTICK_PERIOD_MS);
	}
}
