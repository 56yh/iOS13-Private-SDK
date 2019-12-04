//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CAColorMatrix {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
};

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};






struct SBDeviceApplicationSceneStatusBarStateObserverFlags {
    unsigned int wantsDidChangeStatusBarStyleTo:1;
    unsigned int wantsDidChangeStatusBarPartStylesTo:1;
    unsigned int wantsDidChangeStatusBarAlphaTo:1;
    unsigned int wantsDidChangeStatusBarHiddenTo_withAnimation:1;
    unsigned int wantsDidChangeStatusBarOrientationTo:1;
    unsigned int wantsDidInvalidateStatusBarDescriptionForSceneWithIdentifier:1;
    unsigned int wantsDidChangeStatusBarStyleOverridesToSuppressTo:1;
    unsigned int wantsDidChangeStatusBarAvoidanceFrameTo:1;
    unsigned int wantsDidChangeSceneInterfaceOrientationTo:1;
};

struct SBDragPreviewShadowParameters {
    double shadowOpacity;
    double shadowRadius;
    struct CGSize shadowOffset;
};

struct SBIconImageInfo {
    struct CGSize _field1;
    double _field2;
    double _field3;
};

struct SBModifierCacheDispatchData {
    id _field1;
    CDUnknownFunctionPointerType _field2;
};

struct SBReachabilityActivationContext {
    struct CGPoint location;
    struct CGPoint translation;
    struct CGPoint velocity;
    struct CGRect viewBounds;
    _Bool everTranslatedUpwards;
};

struct SBWindowLevelRange_struct {
    double start;
    double end;
};




struct WGWidgetListSettings {
    unsigned long long _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
};


struct _SBPressSequenceValidatorBounds {
    double _field1;
    double _field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    double _field6;
    int _field7;
} CDStruct_e950349b;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    _Bool itemIsEnabled[42];
    char timeString[64];
    char shortTimeString[64];
    char dateString[256];
    int gsmSignalStrengthRaw;
    int secondaryGsmSignalStrengthRaw;
    int gsmSignalStrengthBars;
    int secondaryGsmSignalStrengthBars;
    char serviceString[100];
    char secondaryServiceString[100];
    char serviceCrossfadeString[100];
    char secondaryServiceCrossfadeString[100];
    char serviceImages[2][100];
    char operatorDirectory[1024];
    unsigned int serviceContentType;
    unsigned int secondaryServiceContentType;
    unsigned int cellLowDataModeActive:1;
    unsigned int secondaryCellLowDataModeActive:1;
    int wifiSignalStrengthRaw;
    int wifiSignalStrengthBars;
    unsigned int wifiLowDataModeActive:1;
    unsigned int dataNetworkType;
    unsigned int secondaryDataNetworkType;
    int batteryCapacity;
    unsigned int batteryState;
    char batteryDetailString[150];
    int bluetoothBatteryCapacity;
    int thermalColor;
    unsigned int thermalSunlightMode:1;
    unsigned int slowActivity:1;
    unsigned int syncActivity:1;
    char activityDisplayId[256];
    unsigned int bluetoothConnected:1;
    unsigned int displayRawGSMSignal:1;
    unsigned int displayRawWifiSignal:1;
    unsigned int locationIconType:1;
    unsigned int voiceControlIconType:2;
    unsigned int quietModeInactive:1;
    unsigned int tetheringConnectionCount;
    unsigned int batterySaverModeActive:1;
    unsigned int deviceIsRTL:1;
    unsigned int lock:1;
    char breadcrumbTitle[256];
    char breadcrumbSecondaryTitle[256];
    char personName[100];
    unsigned int electronicTollCollectionAvailable:1;
    unsigned int radarAvailable:1;
    unsigned int wifiLinkWarning:1;
    unsigned int wifiSearching:1;
    double backgroundActivityDisplayStartDate;
    unsigned int shouldShowEmergencyOnlyStatus:1;
    unsigned int secondaryCellularConfigured:1;
    char primaryServiceBadgeString[100];
    char secondaryServiceBadgeString[100];
} CDStruct_0942cde0;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    double value;
    _Bool inclusive;
} CDStruct_e3385c33;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    long long startStyle;
    long long endStyle;
    double transitionFraction;
} CDStruct_059c2b36;

typedef struct {
    _Bool valid;
    CDStruct_059c2b36 styleTransitionState;
} CDStruct_e838e30c;

typedef struct {
    _Bool _field1[42];
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :2;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int _field2;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    CDStruct_0942cde0 _field3;
} CDStruct_fdd39a06;

typedef struct {
    long long _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
} CDStruct_3b09cf25;

typedef struct {
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
        int _field6;
    } _field1;
    struct {
        unsigned int _field1;
    } _field2;
} CDStruct_a54b61c1;

