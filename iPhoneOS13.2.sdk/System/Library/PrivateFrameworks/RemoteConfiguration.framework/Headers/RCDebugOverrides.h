//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/RCSerializable-Protocol.h>

@class NSArray, NSString;

@interface RCDebugOverrides : NSObject <RCSerializable>
{
    _Bool _disableAbTesting;
    _Bool _ignoreCache;
    _Bool _enableExtraLogs;
    NSArray *_overrideSegmentSetIDs;
    NSArray *_additionalSegmentSetIDs;
    unsigned long long _configurationSource;
    unsigned long long _debugEnvironment;
}

+ (id)defaultDebugOverrides;
@property(readonly, nonatomic) _Bool enableExtraLogs; // @synthesize enableExtraLogs=_enableExtraLogs;
@property(readonly, nonatomic) _Bool ignoreCache; // @synthesize ignoreCache=_ignoreCache;
@property(readonly, nonatomic) unsigned long long debugEnvironment; // @synthesize debugEnvironment=_debugEnvironment;
@property(readonly, nonatomic) unsigned long long configurationSource; // @synthesize configurationSource=_configurationSource;
@property(readonly, copy, nonatomic) NSArray *additionalSegmentSetIDs; // @synthesize additionalSegmentSetIDs=_additionalSegmentSetIDs;
@property(readonly, copy, nonatomic) NSArray *overrideSegmentSetIDs; // @synthesize overrideSegmentSetIDs=_overrideSegmentSetIDs;
@property(readonly, nonatomic) _Bool disableAbTesting; // @synthesize disableAbTesting=_disableAbTesting;
@property(readonly, nonatomic) _Bool onlyUseFallbackURL;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDisableAbTesting:(_Bool)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 configurationSource:(unsigned long long)arg4 debugEnvironment:(unsigned long long)arg5 ignoreCache:(_Bool)arg6 enableExtraLogs:(_Bool)arg7;
- (id)initWithDisableAbTesting:(_Bool)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 configurationSource:(unsigned long long)arg4 debugEnvironment:(unsigned long long)arg5 ignoreCache:(_Bool)arg6;
- (id)initWithDisableAbTesting:(_Bool)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 onlyUseFallbackURL:(_Bool)arg4 debugEnvironment:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

