//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <SystemStatus/STStatusDomainData-Protocol.h>
#import <SystemStatus/STStatusDomainDataDifferencing-Protocol.h>

@class NSString;

@interface STTelephonyStatusDomainSIMInfo : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>
{
    _Bool _SIMPresent;
    NSString *_label;
    NSString *_shortLabel;
    unsigned long long _signalStrengthBars;
    unsigned long long _maxSignalStrengthBars;
    unsigned long long _serviceState;
    unsigned long long _cellularServiceState;
    NSString *_serviceDescription;
    NSString *_secondaryServiceDescription;
    unsigned long long _dataNetworkType;
    _Bool _providingDataConnection;
    _Bool _preferredForDataConnections;
    _Bool _registeredWithoutCellular;
    _Bool _callForwardingEnabled;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isCallForwardingEnabled) _Bool callForwardingEnabled; // @synthesize callForwardingEnabled=_callForwardingEnabled;
@property(readonly, nonatomic, getter=isRegisteredWithoutCellular) _Bool registeredWithoutCellular; // @synthesize registeredWithoutCellular=_registeredWithoutCellular;
@property(readonly, nonatomic, getter=isPreferredForDataConnections) _Bool preferredForDataConnections; // @synthesize preferredForDataConnections=_preferredForDataConnections;
@property(readonly, nonatomic, getter=isProvidingDataConnection) _Bool providingDataConnection; // @synthesize providingDataConnection=_providingDataConnection;
@property(readonly, nonatomic) unsigned long long dataNetworkType; // @synthesize dataNetworkType=_dataNetworkType;
@property(readonly, copy, nonatomic) NSString *secondaryServiceDescription; // @synthesize secondaryServiceDescription=_secondaryServiceDescription;
@property(readonly, copy, nonatomic) NSString *serviceDescription; // @synthesize serviceDescription=_serviceDescription;
@property(readonly, nonatomic) unsigned long long cellularServiceState; // @synthesize cellularServiceState=_cellularServiceState;
@property(readonly, nonatomic) unsigned long long serviceState; // @synthesize serviceState=_serviceState;
@property(readonly, nonatomic) unsigned long long maxSignalStrengthBars; // @synthesize maxSignalStrengthBars=_maxSignalStrengthBars;
@property(readonly, nonatomic) unsigned long long signalStrengthBars; // @synthesize signalStrengthBars=_signalStrengthBars;
@property(readonly, copy, nonatomic) NSString *shortLabel; // @synthesize shortLabel=_shortLabel;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic, getter=isSIMPresent) _Bool SIMPresent; // @synthesize SIMPresent=_SIMPresent;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dataByApplyingDiff:(id)arg1;
- (id)diffFromData:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSIMPresent:(_Bool)arg1 label:(id)arg2 shortLabel:(id)arg3 signalStrengthBars:(unsigned long long)arg4 maxSignalStrengthBars:(unsigned long long)arg5 serviceState:(unsigned long long)arg6 cellularServiceState:(unsigned long long)arg7 serviceDescription:(id)arg8 secondaryServiceDescription:(id)arg9 dataNetworkType:(unsigned long long)arg10 providingDataConnection:(_Bool)arg11 preferredForDataConnections:(_Bool)arg12 registeredWithoutCellular:(_Bool)arg13 callForwardingEnabled:(_Bool)arg14;
- (id)initWithSIMInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

