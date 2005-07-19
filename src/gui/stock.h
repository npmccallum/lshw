#ifndef _STOCK_H_
#define _STOCK_H_

/**************************************************************************/
/** @name Stock images                                                    */
/**************************************************************************/
/*@{*/
#define LSHW_STOCK_AUDIO           "lshw-audio"
#define LSHW_STOCK_BATTERY         "lshw-battery"
#define LSHW_STOCK_BLUETOOTH       "lshw-bluetooth"
#define LSHW_STOCK_DESKTOPCOMPUTER "lshw-desktopcomputer"
#define LSHW_STOCK_DISABLED        "lshw-disabled"
#define LSHW_STOCK_DISPLAY         "lshw-display"
#define LSHW_STOCK_CD              "lshw-cd"
#define LSHW_STOCK_DISC            "lshw-disc"
#define LSHW_STOCK_FIREWIRE        "lshw-firewire"
#define LSHW_STOCK_LAPTOP          "lshw-laptop"
#define LSHW_STOCK_LOGO            "lshw-logo"
#define LSHW_STOCK_MEMORY          "lshw-memory"
#define LSHW_STOCK_MINI            "lshw-mini"
#define LSHW_STOCK_MODEM           "lshw-modem"
#define LSHW_STOCK_NETWORK         "lshw-network"
#define LSHW_STOCK_PARALLEL        "lshw-parallel"
#define LSHW_STOCK_POWERMAC        "lshw-powermac"
#define LSHW_STOCK_POWERMACG5      "lshw-powermacg5"
#define LSHW_STOCK_PRINTER         "lshw-printer"
#define LSHW_STOCK_RADIO           "lshw-radio"
#define LSHW_STOCK_RAID            "lshw-raid"
#define LSHW_STOCK_SCSI            "lshw-scsi"
#define LSHW_STOCK_SERIAL          "lshw-serial"
#define LSHW_STOCK_TOWERCOMPUTER   "lshw-towercomputer"
#define LSHW_STOCK_USB             "lshw-usb"
#define LSHW_STOCK_WIFI            "lshw-wifi"
/*@}*/

/**
 * For getting the icon size for the logo
 */
#define LSHW_ICON_SIZE_LOGO        "lshw-icon-size-logo"

/**
 * Sets up the lshw stock repository.
 */
void lshw_gtk_stock_init(void);

#endif /* _STOCK_H_ */
