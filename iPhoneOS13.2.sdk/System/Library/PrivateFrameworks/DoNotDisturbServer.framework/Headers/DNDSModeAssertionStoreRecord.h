//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSModeAssertionStoreRecordDictionaryEncoding-Protocol.h>

@class NSArray, NSString;

@interface DNDSModeAssertionStoreRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>
{
    NSArray *_assertions;
    NSArray *_invalidations;
    NSArray *_invalidationRequests;
}

+ (id)recordForAssertionStore:(id)arg1;
+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 *)arg2;
@property(retain, nonatomic) NSArray *invalidationRequests; // @synthesize invalidationRequests=_invalidationRequests;
@property(retain, nonatomic) NSArray *invalidations; // @synthesize invalidations=_invalidations;
@property(retain, nonatomic) NSArray *assertions; // @synthesize assertions=_assertions;
- (id)object;
- (id)dictionaryWithKeys:(const CDStruct_0a6492a9 *)arg1 options:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

