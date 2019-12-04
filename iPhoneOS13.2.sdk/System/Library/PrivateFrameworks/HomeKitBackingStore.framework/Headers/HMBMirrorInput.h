//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class HMBLocalSQLContextInputBlock, HMBLocalZone, HMFActivity, NSString;

@interface HMBMirrorInput : HMFObject <HMFLogging>
{
    HMBLocalZone *_localZone;
    HMBLocalSQLContextInputBlock *_block;
    HMFActivity *_activity;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) HMBLocalSQLContextInputBlock *block; // @synthesize block=_block;
@property(readonly, nonatomic) __weak HMBLocalZone *localZone; // @synthesize localZone=_localZone;
- (id)logIdentifier;
- (id)abort;
- (id)commitWithOptions:(id)arg1 error:(id *)arg2;
- (id)removeModelWithExternalID:(id)arg1;
- (id)removeModelWithModelID:(id)arg1;
- (id)updateModelData:(id)arg1 modelEncoding:(unsigned long long)arg2 externalID:(id)arg3 externalData:(id)arg4;
- (id)updateModel:(id)arg1 externalID:(id)arg2 externalData:(id)arg3;
- (void)dealloc;
- (id)initWithLocalZone:(id)arg1 block:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

