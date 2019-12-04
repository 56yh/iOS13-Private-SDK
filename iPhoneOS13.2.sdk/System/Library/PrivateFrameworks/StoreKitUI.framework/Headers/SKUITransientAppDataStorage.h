//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/IKAppDataStoring-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUITransientAppDataStorage : NSObject <IKAppDataStoring>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_storage;
}

@property(retain, nonatomic) NSMutableDictionary *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void)clear;
- (void)removeDataForKey:(id)arg1;
- (unsigned long long)setData:(id)arg1 forKey:(id)arg2;
- (id)getDataForKey:(id)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

