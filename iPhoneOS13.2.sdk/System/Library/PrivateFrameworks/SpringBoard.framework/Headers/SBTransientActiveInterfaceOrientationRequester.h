//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBTransientActiveInterfaceOrientationRequester : NSObject
{
    long long _orientation;
    NSString *_reason;
}

@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)initWithOrientation:(long long)arg1 andReason:(id)arg2;

@end

