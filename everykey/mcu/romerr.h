#ifndef _ROMERR_H_#define _ROMERR_H_typedef enum {  ERR_ISP_BASE = 0x00000000,/*0x00000001*/ ERR_ISP_INVALID_COMMAND = ERR_ISP_BASE + 1,/*0x00000002*/ ERR_ISP_SRC_ADDR_ERROR, /* Source address not on word boundary *//*0x00000003*/ ERR_ISP_DST_ADDR_ERROR, /* Destination address not on word or 256 byte boundary *//*0x00000004*/ ERR_ISP_SRC_ADDR_NOT_MAPPED,/*0x00000005*/ ERR_ISP_DST_ADDR_NOT_MAPPED,/*0x00000006*/ ERR_ISP_COUNT_ERROR, /* Byte count is not multiple of 4 or is not a permitted value *//*0x00000007*/ ERR_ISP_INVALID_SECTOR,/*0x00000008*/ ERR_ISP_SECTOR_NOT_BLANK,/*0x00000009*/ ERR_ISP_SECTOR_NOT_PREPARED_FOR_WRITE_OPERATION,/*0x0000000A*/ ERR_ISP_COMPARE_ERROR,/*0x0000000B*/ ERR_ISP_BUSY, /* Flash programming hardware interface is busy *//*0x0000000C*/ ERR_ISP_PARAM_ERROR, /* Insufficient number of parameters *//*0x0000000D*/ ERR_ISP_ADDR_ERROR, /* Address not on word boundary *//*0x0000000E*/ ERR_ISP_ADDR_NOT_MAPPED,/*0x0000000F*/ ERR_ISP_CMD_LOCKED, /* Command is locked *//*0x00000010*/ ERR_ISP_INVALID_CODE, /* Unlock code is invalid *//*0x00000011*/ ERR_ISP_INVALID_BAUD_RATE,/*0x00000012*/ ERR_ISP_INVALID_STOP_BIT,/*0x00000013*/ ERR_ISP_CODE_READ_PROTECTION_ENABLED,/*0x00000014*/ ERR_ISP_INVALID_FLASH_UNIT,/*0x00000015*/ ERR_ISP_USER_CODE_CHECKSUM,/*0x00000016*/ ERR_ISP_SETTING_ACTIVE_PARTITION,/*0x00000017*/ ERR_ISP_IRC_NO_POWER,/*0x00000018*/ ERR_ISP_FLASH_NO_POWER,/*0x00000019*/ ERR_ISP_EEPROM_NO_POWER,/*0x0000001A*/ ERR_ISP_EEPROM_NO_CLOCK,/*0x0000001B*/ ERR_ISP_FLASH_NO_CLOCK,/* ROM API related errors */ERR_API_BASE = 0x00010000,/*0x00010001*/ ERR_API_INVALID_PARAMS = ERR_API_BASE + 1, /**< Invalid parameters*//*0x00010002*/ ERR_API_INVALID_PARAM1, /**< PARAM1 is invalid *//*0x00010003*/ ERR_API_INVALID_PARAM2, /**< PARAM2 is invalid *//*0x00010004*/ ERR_API_INVALID_PARAM3, /**< PARAM3 is invalid *//*0x00010005*/ ERR_API_MOD_INIT, /**< API is called before module init *//* SPIFI API related errors */ERR_SPIFI_BASE = 0x00020000,/*0x00020001*/ ERR_SPIFI_DEVICE_ERROR = ERR_SPIFI_BASE+1,/*0x00020002*/ ERR_SPIFI_INTERNAL_ERROR,/*0x00020003*/ ERR_SPIFI_TIMEOUT,/*0x00020004*/ ERR_SPIFI_OPERAND_ERROR,/*0x00020005*/ ERR_SPIFI_STATUS_PROBLEM,/*0x00020006*/ ERR_SPIFI_UNKNOWN_EXT,/*0x00020007*/ ERR_SPIFI_UNKNOWN_ID,/*0x00020008*/ ERR_SPIFI_UNKNOWN_TYPE,/*0x00020009*/ ERR_SPIFI_UNKNOWN_MFG,/*0x0002000A*/ ERR_SPIFI_NO_DEVICE,/*0x0002000B*/ ERR_SPIFI_ERASE_NEEDED,SEC_AES_NO_ERROR=0,/* Security API related errors */ERR_SEC_AES_BASE = 0x00030000,/*0x00030001*/ ERR_SEC_AES_WRONG_CMD=ERR_SEC_AES_BASE+1,/*0x00030002*/ ERR_SEC_AES_NOT_SUPPORTED,/*0x00030003*/ ERR_SEC_AES_KEY_ALREADY_PROGRAMMED,/*0x00030004*/ ERR_SEC_AES_DMA_CHANNEL_CFG,/*0x00030005*/ ERR_SEC_AES_DMA_MUX_CFG,/*0x00030006*/ SEC_AES_DMA_BUSY,/* USB device stack related errors */ERR_USB_BASE = 0x00040000,/*0x00040001*/ ERR_USB_INVALID_REQ = ERR_USB_BASE + 1, /**< invalid request *//*0x00040002*/ ERR_USB_UNHANDLED, /**< Callback did not process the event *//*0x00040003*/ ERR_USB_STALL, /**< Stall the endpoint on which the call back is called *//*0x00040004*/ ERR_USB_SEND_ZLP, /**< Send ZLP packet on the endpoint on which the call back is called *//*0x00040005*/ ERR_USB_SEND_DATA, /**< Send data packet on the endpoint on which the call back is called *//*0x00040006*/ ERR_USB_BAD_DESC, /**< Bad descriptor*//*0x00040007*/ ERR_USB_BAD_CFG_DESC,/**< Bad config descriptor*//*0x00040008*/ ERR_USB_BAD_INTF_DESC,/**< Bad interface descriptor*//*0x00040009*/ ERR_USB_BAD_EP_DESC,/**< Bad endpoint descriptor*//*0x0004000a*/ ERR_USB_BAD_MEM_BUF, /**< Bad alignment of buffer passed. *//*0x0004000b*/ ERR_USB_TOO_MANY_CLASS_HDLR, /**< Too many class handlers. *//* CGU related errors */ERR_CGU_BASE = 0x00050000,/*0x00050001*/ ERR_CGU_NOT_IMPL=ERR_CGU_BASE+1,/*0x00050002*/ ERR_CGU_INVALID_PARAM,/*0x00050003*/ ERR_CGU_INVALID_SLICE,/*0x00050004*/ ERR_CGU_OUTPUT_GEN,/*0x00050005*/ ERR_CGU_DIV_SRC,/*0x00050006*/ ERR_CGU_DIV_VAL,/*0x00050007*/ ERR_CGU_SRC,/* OTP related errors */ERR_OTP_BASE = 0x00070000,/*0x00070001*/ ERR_OTP_WR_ENABLE_INVALID = ERR_OTP_BASE+1,/*0x00070002*/ ERR_OTP_SOME_BITS_ALREADY_PROGRAMMED,/*0x00070003*/ ERR_OTP_ALL_DATA_OR_MASK_ZERO,/*0x00070004*/ ERR_OTP_WRITE_ACCESS_LOCKED,/*0x00070005*/ ERR_OTP_READ_DATA_MISMATCH,/*0x00070006*/ ERR_OTP_USB_ID_ENABLED,/*0x00070007*/ ERR_OTP_ETH_MAC_ENABLED,/*0x00070008*/ ERR_OTP_AES_KEYS_ENABLED,/*0x00070009*/ ERR_OTP_ILLEGAL_BANK,/* CLK related errors */ERR_CLK_BASE = 0x000B0000,/*0x000B0001*/ ERR_CLK_NOT_IMPL=ERR_CLK_BASE+1,/*0x000B0002*/ ERR_CLK_INVALID_PARAM,/*0x000B0003*/ ERR_CLK_INVALID_SLICE,/*0x000B0004*/ ERR_CLK_OUTPUT_GEN,/*0x000B0005*/ ERR_CLK_DIV_SRC,/*0x000B0006*/ ERR_CLK_DIV_VAL,/*0x000B0007*/ ERR_CLK_SRC,/*0x000B0008*/ ERR_CLK_PLL_FIN_TOO_SMALL,/*0x000B0009*/ ERR_CLK_PLL_FIN_TOO_LARGE,/*0x000B000A*/ ERR_CLK_PLL_FOUT_TOO_SMALL,/*0x000B000B*/ ERR_CLK_PLL_FOUT_TOO_LARGE,/*0x000B000C*/ ERR_CLK_PLL_NO_SOLUTION,/*0x000B000D*/ ERR_CLK_PLL_MIN_PCT,/*0x000B000E*/ ERR_CLK_PLL_MAX_PCT,/*0x000B000F*/ ERR_CLK_OSC_FREQ,/*0x000B0010*/ ERR_CLK_CFG,/*0x000B0011*/ ERR_CLK_TIMEOUT,/*0x000B0012*/ ERR_CLK_BASE_OFF,/*0x000B0013*/ ERR_CLK_OFF_DEADLOCK} ROM_ERR;#endif