#if 0
#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.10 (swiftlang-5.10.0.13 clang-1500.3.9.4)
#ifndef GLOBALMOBILESDK_SWIFT_H
#define GLOBALMOBILESDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ObjectiveC;
#endif

#import <GlobalMobileSDK/GlobalMobileSDK.h>

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="GlobalMobileSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;

SWIFT_CLASS("_TtC15GlobalMobileSDK3AID")
@interface AID : NSObject
@property (nonatomic, copy) NSString * _Nullable rid;
@property (nonatomic, copy) NSString * _Nullable pix;
@property (nonatomic, copy) NSString * _Nullable applicationIdentifier;
@property (nonatomic, copy) NSString * _Nullable tlv;
@property (nonatomic, copy) NSString * _Nullable label;
@property (nonatomic, copy) NSString * _Nullable preferredName;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15GlobalMobileSDK16AIDConfiguration")
@interface AIDConfiguration : NSObject
@property (nonatomic, strong) AID * _Nonnull aid;
@property (nonatomic, copy) NSString * _Nonnull terminalCapabilities;
@property (nonatomic, copy) NSString * _Nonnull terminalAppVersion;
@property (nonatomic, copy) NSString * _Nonnull lowestSupportedICCApplicationVersion;
@property (nonatomic, copy) NSString * _Nonnull priorityIndex;
@property (nonatomic, copy) NSString * _Nonnull applicationSelectionFlags;
@property (nonatomic, copy) NSString * _Nonnull cvmLimit;
@property (nonatomic, copy) NSString * _Nonnull floorLimit;
@property (nonatomic, copy) NSString * _Nonnull tlvData;
@property (nonatomic, copy) NSString * _Nonnull transactionLimit;
@property (nonatomic, copy) NSString * _Nonnull terminalActionCodeDefault;
@property (nonatomic, copy) NSString * _Nonnull terminalActionCodeDenial;
@property (nonatomic, copy) NSString * _Nonnull terminalActionCodeOnline;
@property (nonatomic) BOOL contactless;
- (nonnull instancetype)initWithAid:(AID * _Nonnull)aid OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, AutoSubstantiationType, open) {
  AutoSubstantiationTypeTOTAL_HEALTHCARE_AMT = 0,
  AutoSubstantiationTypeSUBTOTAL_PRESCRIPTION_AMT = 1,
  AutoSubstantiationTypeSUBTOTAL_VISION__OPTICAL_AMT = 2,
  AutoSubstantiationTypeSUBTOTAL_CLINIC_OR_OTHER_AMT = 3,
  AutoSubstantiationTypeSUBTOTAL_DENTAL_AMT = 4,
};


SWIFT_CLASS("_TtC15GlobalMobileSDK11CAPublicKey")
@interface CAPublicKey : NSObject
/// RID - Registered Application Provider Identifier
@property (nonatomic, copy) NSString * _Nonnull rid;
/// Certification Authority Public Key Index
@property (nonatomic, copy) NSString * _Nonnull caPublicKeyIndex;
/// Public Key
@property (nonatomic, copy) NSString * _Nonnull publicKey;
/// Exponent of Public Key
@property (nonatomic, copy) NSString * _Nonnull exponentOfPublicKey;
/// Checksum of Public key
@property (nonatomic, copy) NSString * _Nonnull checksum;
@property (nonatomic) BOOL productionKey;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init:(NSString * _Nonnull)rid caPublicKeyIndex:(NSString * _Nonnull)caPublicKeyIndex publicKey:(NSString * _Nonnull)publicKey exponentOfPublicKey:(NSString * _Nonnull)exponentOfPublicKey productionKey:(BOOL)productionKey;
- (nonnull instancetype)init:(NSString * _Nonnull)rid caPublicKeyIndex:(NSString * _Nonnull)caPublicKeyIndex publicKey:(NSString * _Nonnull)publicKey exponentOfPublicKey:(NSString * _Nonnull)exponentOfPublicKey checksum:(NSString * _Nonnull)checksum productionKey:(BOOL)productionKey;
@end

typedef SWIFT_ENUM(NSInteger, CardDataSource, open) {
  CardDataSourceSwipe = 0,
  CardDataSourceNfc = 1,
  CardDataSourceEmv = 2,
  CardDataSourceQuickChip = 3,
  CardDataSourceEmvContactless = 4,
  CardDataSourceManual = 5,
  CardDataSourcePhone = 6,
  CardDataSourceFallbackSwipe = 7,
  CardDataSourceNone = 8,
};

typedef SWIFT_ENUM(NSUInteger, CardholderAuthenticationMethod, open) {
  CardholderAuthenticationMethodNotAuthenticated = 0,
  CardholderAuthenticationMethodPin = 1,
  CardholderAuthenticationMethodOfflinePin = 2,
  CardholderAuthenticationMethodElcronicSignatureAnalysis = 3,
  CardholderAuthenticationMethodManualSignature = 4,
  CardholderAuthenticationMethodManualOther = 5,
  CardholderAuthenticationMethodUnknown = 6,
  CardholderAuthenticationMethodSystematicOther = 7,
  CardholderAuthenticationMethodETicketEnvAmex = 8,
  CardholderAuthenticationMethodNotSet = 9,
};

typedef SWIFT_ENUM(NSUInteger, ConnectionType, open) {
  ConnectionTypeUsb = 0,
  ConnectionTypeAudioJack = 1,
  ConnectionTypeIpAddress = 2,
  ConnectionTypeBluetooth = 3,
  ConnectionTypeNotSelected = 4,
};

typedef SWIFT_ENUM(NSInteger, CountryCode, open) {
  CountryCodeUSA = 840,
  CountryCodeCAD = 124,
};


SWIFT_CLASS("_TtC15GlobalMobileSDK16CreditCardHelper")
@interface CreditCardHelper : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, CurrencyCode, open) {
  CurrencyCodeUSD = 840,
  CurrencyCodeCAD = 124,
};


SWIFT_CLASS("_TtC15GlobalMobileSDK6Device")
@interface Device : NSObject
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nonnull identifier;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name identifier:(NSString * _Nonnull)identifier OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum PinLength : NSUInteger;
enum TerminalAuthenticationCapability : NSUInteger;
enum TerminalOperatingEnvironment : NSUInteger;
enum TerminalOutputCapability : NSUInteger;
enum TerminalCapability : NSUInteger;
enum EncryptionType : NSInteger;
enum RUATerminalType : NSUInteger;

SWIFT_CLASS("_TtC15GlobalMobileSDK24EMVTerminalConfiguration")
@interface EMVTerminalConfiguration : NSObject
@property (nonatomic) enum PinLength maxPinLength;
@property (nonatomic) NSUInteger terminalFloorLimit;
@property (nonatomic) NSUInteger terminalCvmLimit;
@property (nonatomic) enum TerminalAuthenticationCapability terminalAuthenticationCapability;
@property (nonatomic) enum TerminalOperatingEnvironment terminalOperatingEnvironment;
@property (nonatomic) enum TerminalOutputCapability terminalOutputCapability;
@property (nonatomic) enum TerminalCapability terminalCapability;
@property (nonatomic) BOOL terminalCardCaptureSupported;
@property (nonatomic) enum EncryptionType encryptionType;
- (nonnull instancetype)initWithTerminalType:(enum RUATerminalType)terminalType OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, EncryptionType, open) {
  EncryptionTypeTDES = 0,
  EncryptionTypeDUKPT = 1,
  EncryptionTypeVoltage = 2,
  EncryptionTypeIDT_TDES = 3,
  EncryptionTypeNone = 4,
};

typedef SWIFT_ENUM(NSInteger, GMSFallbackReason, open) {
  GMSFallbackReasonEmptyCandidateList = 0,
  GMSFallbackReasonIccError = 1,
  GMSFallbackReasonOther = 2,
  GMSFallbackReasonNone = 3,
};



@class TerminalTender;
enum TransactionStatus : NSUInteger;

SWIFT_CLASS("_TtC15GlobalMobileSDK18HostTenderResponse")
@interface HostTenderResponse : NSObject
@property (nonatomic, strong) TerminalTender * _Nullable tender;
@property (nonatomic) enum TransactionStatus transactionStatus;
@property (nonatomic, copy) NSString * _Nullable emvIssuerAuthCode;
@property (nonatomic, copy) NSString * _Nullable emvIssuerScripts;
@property (nonatomic, copy) NSString * _Nullable emvIssuerAuthenticationData;
@property (nonatomic, copy) NSString * _Nullable emvIssuerRspCode;
@property (nonatomic, copy) NSString * _Nullable emvIssuerResponse;
@property (nonatomic, copy) NSString * _Nullable gatewayAuthCode;
@property (nonatomic, copy) NSString * _Nullable onlineProcessResult;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, LastChipRead, open) {
  LastChipReadSuccessful = 0,
  LastChipReadFailed = 1,
  LastChipReadNotAChipTransaction = 2,
  LastChipReadUnknown = 3,
};

typedef SWIFT_ENUM(NSUInteger, PinLength, open) {
  PinLengthUnknown = 0,
  PinLengthNotSupported = 1,
  PinLengthMax4 = 2,
  PinLengthMax5 = 3,
  PinLengthMax6 = 4,
  PinLengthMax7 = 5,
  PinLengthMax8 = 6,
  PinLengthMax9 = 7,
  PinLengthMax10 = 8,
  PinLengthMax11 = 9,
  PinLengthMax12 = 10,
};


SWIFT_CLASS("_TtC15GlobalMobileSDK17RUATerminalConfig")
@interface RUATerminalConfig : NSObject
@property (nonatomic) BOOL isDebug;
@property (nonatomic) BOOL isProduction;
@property (nonatomic) enum RUATerminalType terminalType;
@property (nonatomic, strong) EMVTerminalConfiguration * _Nullable emvConfig;
- (nonnull instancetype)initWithIsDebug:(BOOL)isDebug isProduction:(BOOL)isProduction terminal:(enum RUATerminalType)terminal emvConfig:(EMVTerminalConfiguration * _Nullable)emvConfig OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSUInteger, RUATerminalType, open) {
  RUATerminalTypeG4x_g5x = 0,
  RUATerminalTypeRp350x = 1,
  RUATerminalTypeRp450c = 2,
  RUATerminalTypeRp750x = 3,
  RUATerminalTypeRp45BT = 4,
  RUATerminalTypeMoby3000 = 5,
  RUATerminalTypeMoby8500 = 6,
  RUATerminalTypeVirtualTerminal = 7,
  RUATerminalTypeUnknown = 8,
};

typedef SWIFT_ENUM(NSInteger, ReversalReason, open) {
  ReversalReasonUndefined = 0,
  ReversalReasonVoidedByCustomer = 1,
  ReversalReasonDeviceTimeOut = 2,
  ReversalReasonDeviceUnavailable = 3,
  ReversalReasonPartialReversal = 4,
  ReversalReasonPrematureChipRemoval = 5,
  ReversalReasonChipDeclined = 6,
  ReversalReasonSurchargeRequested = 7,
};

typedef SWIFT_ENUM(NSUInteger, TerminalAuthenticationCapability, open) {
  TerminalAuthenticationCapabilityNoCapability = 0,
  TerminalAuthenticationCapabilityPinEntry = 1,
  TerminalAuthenticationCapabilitySignatureAnalysis = 2,
  TerminalAuthenticationCapabilitySignatureAnalysisInoperative = 3,
  TerminalAuthenticationCapabilityOther = 4,
  TerminalAuthenticationCapabilityUnknown = 5,
};

typedef SWIFT_ENUM(NSUInteger, TerminalCapability, open) {
  TerminalCapabilityUnknown = 0,
  TerminalCapabilityNoTerminalManual = 1,
  TerminalCapabilityMagStripeReadOnly = 2,
  TerminalCapabilityOcr = 3,
  TerminalCapabilityIccReadOnly = 4,
  TerminalCapabilityKeyedEntryOnly = 5,
  TerminalCapabilityMagStripeContactlessOnly = 6,
  TerminalCapabilityMagStripeKeyedEntryOnly = 7,
  TerminalCapabilityMagStripeIccKeyedEntryOnly = 8,
  TerminalCapabilityMagStripeIccOnly = 9,
  TerminalCapabilityIccKeyedEntryOnly = 10,
  TerminalCapabilityIccContactContactless = 11,
  TerminalCapabilityIccContactlessOnly = 12,
  TerminalCapabilityOtherCapabilityForMasterCard = 13,
};

typedef SWIFT_ENUM(NSUInteger, TerminalOTAResult, open) {
  TerminalOTAResultSuccess = 0,
  TerminalOTAResultSetupError = 1,
  TerminalOTAResultBatteryLowError = 2,
  TerminalOTAResultDeviceCommError = 3,
  TerminalOTAResultServerCommError = 4,
  TerminalOTAResultFailed = 5,
  TerminalOTAResultStopped = 6,
  TerminalOTAResultNoUpdateRequired = 7,
  TerminalOTAResultInvalidControllerStateError = 8,
  TerminalOTAResultInCompatibleFirmwareHex = 9,
  TerminalOTAResultIncompitableConfigHex = 10,
};

typedef SWIFT_ENUM(NSUInteger, TerminalOperatingEnvironment, open) {
  TerminalOperatingEnvironmentNoTerminal = 0,
  TerminalOperatingEnvironmentOnMerchantPremisesAttended = 1,
  TerminalOperatingEnvironmentOnMerchantPremisesUnattended = 2,
  TerminalOperatingEnvironmentOffMerchantPremisesAttended = 3,
  TerminalOperatingEnvironmentOffMerchantPremisesUnattended = 4,
  TerminalOperatingEnvironmentOnCustomerPremisesUnattended = 5,
  TerminalOperatingEnvironmentOffMerchantPremisesMPOS = 6,
  TerminalOperatingEnvironmentOnMerchantPremisesMPOS = 7,
  TerminalOperatingEnvironmentOffMerchantPremisesCustomerPOS = 8,
  TerminalOperatingEnvironmentOnMerchantPremisesCustomerPOS = 9,
  TerminalOperatingEnvironmentOffCustomerPremisesUnattended = 10,
  TerminalOperatingEnvironmentUnknown = 11,
  TerminalOperatingEnvironmentElectronicDeliveryAmex = 12,
  TerminalOperatingEnvironmentPhysicalDeliveryAmex = 13,
};

typedef SWIFT_ENUM(NSUInteger, TerminalOutputCapability, open) {
  TerminalOutputCapabilityNone = 0,
  TerminalOutputCapabilityPrintOnly = 1,
  TerminalOutputCapabilityDisplayOnly = 2,
  TerminalOutputCapabilityPrintAndDisplay = 3,
  TerminalOutputCapabilityUnknown = 4,
};

@class UIImage;
enum TransactionResult : NSUInteger;

SWIFT_CLASS("_TtC15GlobalMobileSDK14TerminalTender")
@interface TerminalTender : NSObject
@property (nonatomic, copy) NSString * _Nonnull paymentAppVersion;
@property (nonatomic, copy) NSString * _Nullable gatewayTransactionID;
@property (nonatomic, copy) NSString * _Nullable posReferenceNumber;
@property (nonatomic) BOOL disableEMV;
@property (nonatomic) BOOL enableQuickChip;
@property (nonatomic) NSInteger amount;
@property (nonatomic) NSInteger tip;
@property (nonatomic) NSInteger salesTax;
@property (nonatomic, copy) NSString * _Nullable invoiceNumber;
@property (nonatomic, copy) NSString * _Nullable orderID;
@property (nonatomic, copy) NSString * _Nullable orderNotes;
@property (nonatomic, copy) NSString * _Nullable orderNumber;
@property (nonatomic, copy) NSString * _Nullable forcedAuthCode;
@property (nonatomic, strong) UIImage * _Nullable signatureImage;
@property (nonatomic, copy) NSString * _Nullable track1Data;
@property (nonatomic, copy) NSString * _Nullable track2Data;
@property (nonatomic, copy) NSString * _Nullable emulatedTrackData;
@property (nonatomic) BOOL fallbackSwipe;
@property (nonatomic) BOOL emvContactlessToContactChip;
@property (nonatomic, copy) NSString * _Nullable tlvData;
@property (nonatomic, copy) NSString * _Nullable encryptedTrackData;
@property (nonatomic, copy) NSString * _Nullable packEncryptedTrackData;
@property (nonatomic, copy) NSString * _Nullable ksn;
@property (nonatomic, copy) NSString * _Nullable pin;
@property (nonatomic, copy) NSString * _Nullable pinKsn;
@property (nonatomic, copy) NSString * _Nullable serviceCode;
@property (nonatomic, copy) NSString * _Nullable formatID;
@property (nonatomic, copy) NSString * _Nullable redactedPan;
@property (nonatomic, copy) NSString * _Nullable maskedPan;
@property (nonatomic, copy) NSString * _Nullable cardHolderName;
@property (nonatomic, copy) NSString * _Nullable cardNumber;
@property (nonatomic, copy) NSString * _Nullable cvv2;
@property (nonatomic, copy) NSString * _Nullable zip;
@property (nonatomic, copy) NSString * _Nullable expirationDate;
@property (nonatomic, copy) NSString * _Nullable deviceSerialNumber;
@property (nonatomic, copy) NSString * _Nullable kernelVersionNumber;
@property (nonatomic) enum TransactionResult transactionResult;
@property (nonatomic) enum CountryCode countryCode;
@property (nonatomic) enum CurrencyCode currencyCode;
@property (nonatomic) TerminalTransactionType transactionType;
@property (nonatomic) enum CardDataSource cardDataSource;
@property (nonatomic) enum ReversalReason voidReason;
@property (nonatomic) enum GMSFallbackReason emvFallbackCondition;
@property (nonatomic) enum LastChipRead lastChipRead;
@property (nonatomic) enum CardholderAuthenticationMethod cardholderAuthenticationMethod;
@property (nonatomic, readonly) NSInteger totalAmount;
- (BOOL)isChipTransaction SWIFT_WARN_UNUSED_RESULT;
+ (enum CardholderAuthenticationMethod)cardholderAuthenticationMethodfromTlv:(NSString * _Nullable)tlv SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSUInteger, TransactionResult, open) {
  TransactionResultApproved = 0,
  TransactionResultPartialApproval = 1,
  TransactionResultTerminated = 2,
  TransactionResultDeclined = 3,
  TransactionResultOnlineDeclined = 4,
  TransactionResultOfflineApproved = 5,
  TransactionResultOfflineDecline = 6,
  TransactionResultPostAuthChipDecline = 7,
  TransactionResultCanceled = 8,
  TransactionResultTimeout = 9,
  TransactionResultCapkFail = 10,
  TransactionResultNotIcc = 11,
  TransactionResultCardBlocked = 12,
  TransactionResultDeviceError = 13,
  TransactionResultNoEmvApps = 14,
  TransactionResultIccCardRemoved = 15,
  TransactionResultCardSchemeNotMatched = 16,
  TransactionResultSuccess = 17,
  TransactionResultReversalRequired = 18,
  TransactionResultFail = 19,
  TransactionResultHostTimeout = 20,
  TransactionResultNetworkError = 21,
  TransactionResultSurchargeRequested = 22,
};

typedef SWIFT_ENUM(NSUInteger, TransactionStatus, open) {
  TransactionStatusOnlineDecline = 0,
  TransactionStatusOnlineApproved = 1,
  TransactionStatusOfflineApproved = 2,
  TransactionStatusOfflineDecline = 3,
  TransactionStatusCancelled = 4,
  TransactionStatusHostTimeout = 5,
  TransactionStatusGatewayTimeOutNoReply = 6,
  TransactionStatusUnableToGoOnlineOfflineApproved = 7,
  TransactionStatusUnableToGoOnlineOfflineDeclined = 8,
};

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
