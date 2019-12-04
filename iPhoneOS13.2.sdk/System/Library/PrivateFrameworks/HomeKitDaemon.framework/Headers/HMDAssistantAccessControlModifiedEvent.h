//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDAssistantAccessControlModifiedEvent : HMDLogEvent <HMDAWDLogEvent>
{
    _Bool _isEnabled;
    unsigned long long _options;
    unsigned long long _numEnabledAccessories;
    unsigned long long _numCapableAccessories;
}

+ (id)eventWithIsEnabled:(_Bool)arg1 options:(unsigned long long)arg2 numEnabledAccessories:(unsigned long long)arg3 numCapableAccessories:(unsigned long long)arg4;
+ (id)uuid;
+ (void)initialize;
@property(nonatomic) unsigned long long numCapableAccessories; // @synthesize numCapableAccessories=_numCapableAccessories;
@property(nonatomic) unsigned long long numEnabledAccessories; // @synthesize numEnabledAccessories=_numEnabledAccessories;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

