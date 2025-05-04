


#define SSID_NAME "YOUR_SSID"                        // Your wifi ssid
#define SSID_PASWORD "YOUR_PASSWORD"                  // Your wifi password

#define ENABLE_OTA 0                         // If OTA updating of this sketch is enabled (requires ota.h file)
const String OTAPassword = "mytotalysecretpasswordforota";       // Password for performing OTA update (i.e. http://x.x.x.x/ota)

// for manually activating Freenove ESP32-Wrover CAM Board - ESP32-CAM Dev Module 4MB Flash - 4MB PSRAM
// should be set automatically by the platformio.ini file if env esp32camNoResetBefore is used
// #define ESP32CAMNORESETBEFORE 1