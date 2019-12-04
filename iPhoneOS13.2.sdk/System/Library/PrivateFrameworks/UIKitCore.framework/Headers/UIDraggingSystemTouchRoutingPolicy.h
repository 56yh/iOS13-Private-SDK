//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray;

@interface UIDraggingSystemTouchRoutingPolicy : NSObject <NSSecureCoding>
{
    _Bool _hitTestingDisabled;
    NSArray *_contextIDsToAlwaysSendTouches;
    NSArray *_contextIDsToExcludeFromHitTesting;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isHitTestingDisabled) _Bool hitTestingDisabled; // @synthesize hitTestingDisabled=_hitTestingDisabled;
@property(copy, nonatomic) NSArray *contextIDsToExcludeFromHitTesting; // @synthesize contextIDsToExcludeFromHitTesting=_contextIDsToExcludeFromHitTesting;
@property(copy, nonatomic) NSArray *contextIDsToAlwaysSendTouches; // @synthesize contextIDsToAlwaysSendTouches=_contextIDsToAlwaysSendTouches;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

