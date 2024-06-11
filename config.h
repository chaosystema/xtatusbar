#include "xtatusbar.h"

static Component components[] = {
    { "  CPU %hd%% | ", 2000, get_cpu_usage },
    { "  RAM %hd%% | ", 2000, get_ram_usage },
    { "󰏈  TEMP %hd°C | ", 2000, get_cpu_temperature },
    { "󰋊  DISK %hd%% | ", 5000, get_disk_usage },
    { "󰋊  VOL %s | ", 100, get_volume },
    { "%s NET | ", 5000, network_is_connected },
    { "  %s ", 60000, get_date },
};

// static const char *TEMPERATURE_FILE = "/sys/class/thermal/thermal_zone0/temp";
static const char* TEMPERATURE_FILE = "/sys/devices/platform/coretemp.0/hwmon/hwmon1/temp1_input";
static const char *DATE_FORMAT = "%A %d/%m/%Y %H:%M";

