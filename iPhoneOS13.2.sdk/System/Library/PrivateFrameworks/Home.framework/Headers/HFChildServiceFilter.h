//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface HFChildServiceFilter : NSObject
{
    NSSet *_childServiceTypes;
}

@property(readonly, copy, nonatomic) NSSet *childServiceTypes; // @synthesize childServiceTypes=_childServiceTypes;
- (id)filteredChildServicesForParentService:(id)arg1;
- (id)initWithChildServiceTypes:(id)arg1;

@end

