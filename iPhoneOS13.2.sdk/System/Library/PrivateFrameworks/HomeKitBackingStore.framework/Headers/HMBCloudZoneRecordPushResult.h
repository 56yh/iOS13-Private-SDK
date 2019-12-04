//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSError, NSSet;

@interface HMBCloudZoneRecordPushResult : HMFObject
{
    _Bool _fatalError;
    NSSet *_updated;
    NSSet *_deleted;
    NSDictionary *_partialErrors;
    NSDictionary *_conflicts;
    NSError *_error;
}

+ (id)pushResultByMergingPushResult:(id)arg1 withPushResult:(id)arg2;
@property(readonly, nonatomic) _Bool fatalError; // @synthesize fatalError=_fatalError;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDictionary *conflicts; // @synthesize conflicts=_conflicts;
@property(readonly, nonatomic) NSDictionary *partialErrors; // @synthesize partialErrors=_partialErrors;
@property(readonly, nonatomic) NSSet *deleted; // @synthesize deleted=_deleted;
@property(readonly, nonatomic) NSSet *updated; // @synthesize updated=_updated;
- (id)initWithUpdated:(id)arg1 deleted:(id)arg2 conflicts:(id)arg3 error:(id)arg4;
- (id)initWithUpdated:(id)arg1 deleted:(id)arg2 conflicts:(id)arg3 partialErrors:(id)arg4 fatalError:(_Bool)arg5 error:(id)arg6;

@end

