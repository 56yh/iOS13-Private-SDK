//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface TUContactsDataProviderIgnoredHandles : NSObject
{
    NSSet *_handlesToIgnore;
}

@property(readonly, copy, nonatomic) NSSet *handlesToIgnore; // @synthesize handlesToIgnore=_handlesToIgnore;
- (_Bool)contains:(id)arg1;
- (void)loadHandles;
- (id)init;

@end

