//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class NSString;

@interface HMDBackingStoreCacheCreateZoneOperation : HMDBackingStoreOperation
{
    NSString *_zoneName;
    id /* block */ _creationBlock;
}

@property(copy, nonatomic) id /* block */ creationBlock; // @synthesize creationBlock=_creationBlock;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (id)mainReturningError;
- (id)initWithZoneName:(id)arg1 creationBlock:(id /* block */)arg2;

@end

