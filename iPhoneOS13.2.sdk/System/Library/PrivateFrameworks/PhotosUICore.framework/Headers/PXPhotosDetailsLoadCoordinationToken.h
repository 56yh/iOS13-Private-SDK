//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PXPhotosDetailsLoadCoordinator;

@interface PXPhotosDetailsLoadCoordinationToken : NSObject
{
    _Bool _didComplete;
    PXPhotosDetailsLoadCoordinator *__loadCoordinator;
}

@property(readonly, nonatomic) __weak PXPhotosDetailsLoadCoordinator *_loadCoordinator; // @synthesize _loadCoordinator=__loadCoordinator;
- (void)_timeout;
- (void)complete;
- (void)dealloc;
- (id)_initWithLoadCoordinator:(id)arg1;
- (id)init;

@end

