//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPObject;

@interface TSPContainedObject : NSObject
{
    TSPObject *_owner;
}

@property(nonatomic) __weak TSPObject *owner; // @synthesize owner=_owner;
- (void)willModifyForUpgrade;
- (void)willModify;
- (id)initWithOwner:(id)arg1;
- (id)documentRoot;

@end

