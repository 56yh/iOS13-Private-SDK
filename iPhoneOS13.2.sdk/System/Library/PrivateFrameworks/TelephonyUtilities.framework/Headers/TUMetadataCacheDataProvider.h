//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, TUMetadataCacheDataProviderDelegate;

@interface TUMetadataCacheDataProvider : NSObject
{
    id <TUMetadataCacheDataProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_providerCache;
}

+ (id)classIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *providerCache; // @synthesize providerCache=_providerCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)description;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)refresh;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;
- (void)setObject:(id)arg1 forDestinationID:(id)arg2;
- (id)metadataForDestinationID:(id)arg1;
@property(nonatomic) __weak id <TUMetadataCacheDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

