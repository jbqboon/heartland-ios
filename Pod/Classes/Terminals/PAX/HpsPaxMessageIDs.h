#import <Foundation/Foundation.h>

@interface HpsPaxMessageIDs : NSObject
// ADMIN REQUESTS
FOUNDATION_EXPORT NSString *const A00_INITIALIZE;
FOUNDATION_EXPORT NSString *const A02_GET_VARIABLE;
FOUNDATION_EXPORT NSString *const A04_SET_VARIABLE;
FOUNDATION_EXPORT NSString *const A06_SHOW_DIALOG;
FOUNDATION_EXPORT NSString *const A08_GET_SIGNATURE;
FOUNDATION_EXPORT NSString *const A10_SHOW_MESSAGE;
FOUNDATION_EXPORT NSString *const A12_CLEAR_MESSAGE;
FOUNDATION_EXPORT NSString *const A14_CANCEL;
FOUNDATION_EXPORT NSString *const A16_RESET;
FOUNDATION_EXPORT NSString *const A18_UPDATE_RESOURCE_FILE;
FOUNDATION_EXPORT NSString *const A20_DO_SIGNATURE;
FOUNDATION_EXPORT NSString *const A22_DELETE_IMAGE;
FOUNDATION_EXPORT NSString *const A24_SHOW_MESSAGE_CENTER_ALIGNED;
FOUNDATION_EXPORT NSString *const A26_REBOOT;
FOUNDATION_EXPORT NSString *const A28_GET_PIN_BLOCK;
FOUNDATION_EXPORT NSString *const A30_INPUT_ACCOUNT;
FOUNDATION_EXPORT NSString *const A32_RESET_MSR;
FOUNDATION_EXPORT NSString *const A36_INPUT_TEXT;
FOUNDATION_EXPORT NSString *const A38_CHECK_FILE;
FOUNDATION_EXPORT NSString *const A40_AUTHORIZE_CARD;
FOUNDATION_EXPORT NSString *const A42_COMPLETE_ONLINE_EMV;
FOUNDATION_EXPORT NSString *const A44_REMOVE_CARD;
FOUNDATION_EXPORT NSString *const A46_GET_EMV_TLV_DATA;
FOUNDATION_EXPORT NSString *const A48_SET_EMV_TLV_DATA;
FOUNDATION_EXPORT NSString *const A50_INPUT_ACCOUNT_WITH_EMV;
FOUNDATION_EXPORT NSString *const A52_COMPLETE_CONTACTLESS_EMV;
FOUNDATION_EXPORT NSString *const A54_SET_SAF_PARAMETERS;
FOUNDATION_EXPORT NSString *const A56_SHOW_TEXTBOX;

// TRANSACTION REQUESTS
FOUNDATION_EXPORT NSString *const T00_DO_CREDIT;
FOUNDATION_EXPORT NSString *const T02_DO_DEBIT;
FOUNDATION_EXPORT NSString *const T04_DO_EBT;
FOUNDATION_EXPORT NSString *const T06_DO_GIFT;
FOUNDATION_EXPORT NSString *const T08_DO_LOYALTY;
FOUNDATION_EXPORT NSString *const T10_DO_CASH;
FOUNDATION_EXPORT NSString *const T12_DO_CHECK;

// BATCH REQUESTS
FOUNDATION_EXPORT NSString *const B00_BATCH_CLOSE;
FOUNDATION_EXPORT NSString *const B02_FORCE_BATCH_CLOSE;
FOUNDATION_EXPORT NSString *const B04_BATCH_CLEAR;
FOUNDATION_EXPORT NSString *const B06_PURGE_BATCH;
FOUNDATION_EXPORT NSString *const B08_SAF_UPLOAD;
FOUNDATION_EXPORT NSString *const B10_DELETE_SAF_FILE;

// REPORT REQUESTS
FOUNDATION_EXPORT NSString *const R00_LOCAL_TOTAL_REPORT;
FOUNDATION_EXPORT NSString *const R02_LOCAL_DETAIL_REPORT;
FOUNDATION_EXPORT NSString *const R04_LOCAL_FAILED_REPORT;
FOUNDATION_EXPORT NSString *const R06_HOST_REPORT;
FOUNDATION_EXPORT NSString *const R08_HISTORY_REPORT;
FOUNDATION_EXPORT NSString *const R10_SAF_SUMMARY_REPORT;

// ADMIN RESPONSES
FOUNDATION_EXPORT NSString *const A01_RSP_INITIALIZE;
FOUNDATION_EXPORT NSString *const A03_RSP_GET_VARIABLE;
FOUNDATION_EXPORT NSString *const A05_RSP_SET_VARIABLE;
FOUNDATION_EXPORT NSString *const A07_RSP_SHOW_DIALOG;
FOUNDATION_EXPORT NSString *const A09_RSP_GET_SIGNATURE;
FOUNDATION_EXPORT NSString *const A11_RSP_SHOW_MESSAGE;
FOUNDATION_EXPORT NSString *const A13_RSP_CLEAR_MESSAGE;
FOUNDATION_EXPORT NSString *const A17_RSP_RESET;
FOUNDATION_EXPORT NSString *const A19_RSP_UPDATE_RESOURCE_FILE;
FOUNDATION_EXPORT NSString *const A21_RSP_DO_SIGNATURE;
FOUNDATION_EXPORT NSString *const A23_RSP_DELETE_IMAGE;
FOUNDATION_EXPORT NSString *const A25_RSP_SHOW_MESSAGE_CENTER_ALIGNED;
FOUNDATION_EXPORT NSString *const A27_RSP_REBOOT;
FOUNDATION_EXPORT NSString *const A29_RSP_GET_PIN_BLOCK;
FOUNDATION_EXPORT NSString *const A31_RSP_INPUT_ACCOUNT;
FOUNDATION_EXPORT NSString *const A33_RSP_RESET_MSR;
FOUNDATION_EXPORT NSString *const A35_RSP_REPORT_STATUS;
FOUNDATION_EXPORT NSString *const A37_RSP_INPUT_TEXT;
FOUNDATION_EXPORT NSString *const A38_RSP_CHECK_FILE;
FOUNDATION_EXPORT NSString *const A41_RSP_AUTHORIZE_CARD;
FOUNDATION_EXPORT NSString *const A43_RSP_COMPLETE_ONLINE_EMV;
FOUNDATION_EXPORT NSString *const A45_RSP_REMOVE_CARD;
FOUNDATION_EXPORT NSString *const A47_RSP_GET_EMV_TLV_DATA;
FOUNDATION_EXPORT NSString *const A49_RSP_SET_EMV_TLV_DATA;
FOUNDATION_EXPORT NSString *const A51_RSP_INPUT_ACCOUNT_WITH_EMV;
FOUNDATION_EXPORT NSString *const A53_RSP_COMPLETE_CONTACTLESS_EMV;
FOUNDATION_EXPORT NSString *const A55_RSP_SET_SAF_PARAMETERS;
FOUNDATION_EXPORT NSString *const A57_RSP_SHOW_TEXTBOX;

// TRANSACTION RESPONSES
FOUNDATION_EXPORT NSString *const T01_RSP_DO_CREDIT;
FOUNDATION_EXPORT NSString *const T03_RSP_DO_DEBIT;
FOUNDATION_EXPORT NSString *const T05_RSP_DO_EBT;
FOUNDATION_EXPORT NSString *const T07_RSP_DO_GIFT;
FOUNDATION_EXPORT NSString *const T09_RSP_DO_LOYALTY;
FOUNDATION_EXPORT NSString *const T11_RSP_DO_CASH;
FOUNDATION_EXPORT NSString *const T13_RSP_DO_CHECK;

// BATCH RESPONSES
FOUNDATION_EXPORT NSString *const B01_RSP_BATCH_CLOSE;
FOUNDATION_EXPORT NSString *const B03_RSP_FORCE_BATCH_CLOSE;
FOUNDATION_EXPORT NSString *const B05_RSP_BATCH_CLEAR;
FOUNDATION_EXPORT NSString *const B07_RSP_PURGE_BATCH;
FOUNDATION_EXPORT NSString *const B09_RSP_SAF_UPLOAD;
FOUNDATION_EXPORT NSString *const B11_RSP_DELETE_SAF_FILE;

// REPORT RESPONSES
FOUNDATION_EXPORT NSString *const R01_RSP_LOCAL_TOTAL_REPORT;
FOUNDATION_EXPORT NSString *const R03_RSP_LOCAL_DETAIL_REPORT;
FOUNDATION_EXPORT NSString *const R05_RSP_LOCAL_FAILED_REPORT;
FOUNDATION_EXPORT NSString *const R07_RSP_HOST_REPORT;
FOUNDATION_EXPORT NSString *const R09_RSP_HISTORY_REPORT;
FOUNDATION_EXPORT NSString *const R11_RSP_SAF_SUMMARY_REPORT;

// PAX_TXN_TYPE
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_MENU;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_SALE_REDEEM;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_RETURN;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_AUTH;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_POSTAUTH;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_FORCED;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_ADJUST;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_WITHDRAWAL;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_ACTIVATE;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_ISSUE;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_ADD;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_CASHOUT;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_DEACTIVATE;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_REPLACE;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_MERGE;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_REPORTLOST;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_VOID;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_V_SALE;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_V_RTRN;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_V_AUTH;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_V_POST;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_V_FRCD;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_V_WITHDRAW;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_BALANCE;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_VERIFY;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_REACTIVATE;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_FORCED_ISSUE;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_FORCED_ADD;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_UNLOAD;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_RENEW;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_GET_CONVERT_DETAIL;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_CONVERT;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_TOKENIZE;
FOUNDATION_EXPORT NSString *const PAX_TXN_TYPE_REVERSAL;

//PAX_ECOM_MODE
FOUNDATION_EXPORT NSString *const PAX_ECOM_MODE_MAIL_ORDER;
FOUNDATION_EXPORT NSString *const PAX_ECOM_MODE_TELE_ORDER;
FOUNDATION_EXPORT NSString *const PAX_ECOM_MODE_ECOMMERCE;

//PAX_ECOM_TXN_TYPE
FOUNDATION_EXPORT NSString *const PAX_ECOM_TXN_TYPE_SINGLE;
FOUNDATION_EXPORT NSString *const PAX_ECOM_TXN_TYPE_INSTALLMENT;
FOUNDATION_EXPORT NSString *const PAX_ECOM_TXN_TYPE_RECURRING;

//PAX_ECOM_SECURE_TYPE
FOUNDATION_EXPORT NSString *const PAX_ECOM_SECURE_TYPE_SECURE;
FOUNDATION_EXPORT NSString *const PAX_ECOM_SECURE_NON_SECURE;

//PAX_EBT_TYPE
FOUNDATION_EXPORT NSString *const PAX_EBT_TYPE_CASH_BENEFITS;
FOUNDATION_EXPORT NSString *const PAX_EBT_TYPE_FOOD_STAMP;
FOUNDATION_EXPORT NSString *const PAX_EBT_TYPE_VOUCHER;

//PAX_CARD_TYPE
FOUNDATION_EXPORT NSString *const PAX_CARD_TYPE_VISA;
FOUNDATION_EXPORT NSString *const PAX_CARD_TYPE_MASTER_CARD;
FOUNDATION_EXPORT NSString *const PAX_CARD_TYPE_AMEX;
FOUNDATION_EXPORT NSString *const PAX_CARD_TYPE_DiSCOVER;
FOUNDATION_EXPORT NSString *const PAX_CARD_TYPE_DINER_CLUB;
FOUNDATION_EXPORT NSString *const PAX_CARD_TYPE_EN_ROUTE;
FOUNDATION_EXPORT NSString *const PAX_CARD_TYPE_JCB;
FOUNDATION_EXPORT NSString *const PAX_CARD_TYPE_REVOLUTION_CARD;
FOUNDATION_EXPORT NSString *const PAX_CARD_TYPE_VISA_FLEET;
FOUNDATION_EXPORT NSString *const PAX_CARD_TYPE_MASTER_CARD_FLEET;
FOUNDATION_EXPORT NSString *const PAX_CARD_TYPE_FLEET_ONE;
FOUNDATION_EXPORT NSString *const PAX_CARD_TYPE_FLEET_WIDE;
FOUNDATION_EXPORT NSString *const PAX_CARD_TYPE_FUEL_MAN;
FOUNDATION_EXPORT NSString *const PAX_CARD_TYPE_GAS_CARD;
FOUNDATION_EXPORT NSString *const PAX_CARD_TYPE_VOYAGER;
FOUNDATION_EXPORT NSString *const PAX_CARD_TYPE_WRIGHT_EXPRESS;
FOUNDATION_EXPORT NSString *const PAX_CARD_TYPE_OTHER;


//PAX_EXT_DATA
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_TABLE_NUMBER;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_GUEST_NUMBER;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_SIGNATURE_CAPTURE;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_TICKET_NUMBER;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_HOST_REFERENCE_NUMBER;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_TIP_REQUEST;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_SIGNATURE_UPLOAD;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_REPORT_STATUS;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_TOKEN_REQUEST;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_TOKEN;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_CARD_TYPE;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_CARD_TYPE_BITMAP;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_RETURN_REASON;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_ORIGINAL_TRANSACTION_DATE;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_ORIGINAL_PAN;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_ORIGINAL_EXPIRATION_DATE;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_ODOMETER_READING;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_VEHICLE_NUMBER;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_JOB_NUMBER;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_DRIVER_ID;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_EMPLOYEE_NUMBER;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_LICENSE_NUMBER;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_JOB_ID;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_DEPARTMENT_NUMBER;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_CUSTOMER_DATA;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_USER_ID;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_VEHECLE_ID;


FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_APPLICATION_PREFERRED_NAME;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_APPLICATION_LABEL;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_APPLICATION_ID ;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_CUSTOMER_VERIFICATION_METHOD;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_TRANSACTION_CERTIFICATE;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_CARD_BIN;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_SIGNATURE_STATUS;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_TERMINAL_VERIFICATION_RESULTS;
FOUNDATION_EXPORT NSString *const PAX_EXT_DATA_TRANSACTION_STATUS_INFORMATION;

//PAX_CHECK_SALE_TYPE
FOUNDATION_EXPORT NSString *const PAX_CHECK_SALE_TYPE_VERIFICATION;
FOUNDATION_EXPORT NSString *const PAX_CHECK_SALE_TYPE_CONVERSION;
FOUNDATION_EXPORT NSString *const PAX_CHECK_SALE_TYPE_GUARANTEE;

//PAX_CHECK_TYPE
FOUNDATION_EXPORT NSString *const PAX_CHECK_TYPE_PERSONAL;
FOUNDATION_EXPORT NSString *const PAX_CHECK_TYPE_BUSINESS;
FOUNDATION_EXPORT NSString *const PAX_CHECK_TYPE_GOVERNMENT;
FOUNDATION_EXPORT NSString *const PAX_CHECK_TYPE_PAYROLL;
FOUNDATION_EXPORT NSString *const PAX_CHECK_TYPE_TWO_PARTY;

//PAX_ID_TYPE
FOUNDATION_EXPORT NSString *const PAX_ID_TYPE_DRIVERS_LICENSE;
FOUNDATION_EXPORT NSString *const PAX_ID_TYPE_SSN;
FOUNDATION_EXPORT NSString *const PAX_ID_TYPE_MILITARY_ID;
FOUNDATION_EXPORT NSString *const PAX_ID_TYPE_COURTESY_CARD;
FOUNDATION_EXPORT NSString *const PAX_ID_TYPE_PROPRIETARY_CARD;
FOUNDATION_EXPORT NSString *const PAX_ID_TYPE_MILITARY_BASE;
FOUNDATION_EXPORT NSString *const PAX_ID_TYPE_PASSPORT_NUMBER;
  
typedef NS_ENUM(NSInteger, HpsPaxEntryModes) {
    HpsPaxEntryModes_Manual,
    HpsPaxEntryModes_Swipe,
    HpsPaxEntryModes_Contactless,
    HpsPaxEntryModes_Scanner,
    HpsPaxEntryModes_Chip,
    HpsPaxEntryModes_ChipFallBackSwipe
};
typedef NS_ENUM(NSInteger, ApplicationCrytogramType) {
	TC,
	ARQC
};
@end


















