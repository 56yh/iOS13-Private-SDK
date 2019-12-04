//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSSet, SBIconModel;

@interface SBIconVisibilityService : NSObject
{
    SBIconModel *_iconModel;
    NSLock *_iconStateDisplayIdentifiersLock;
    NSSet *_iconStateDisplayIdentifiers;
}

- (void)_visibleIdentifiersChanged:(id)arg1;
- (id)iconStateDisplayIdentifiers;
- (void)dealloc;
- (id)initWithIconModel:(id)arg1;

@end

