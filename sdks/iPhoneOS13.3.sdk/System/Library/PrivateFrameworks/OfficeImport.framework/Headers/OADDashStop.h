//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface OADDashStop : NSObject <NSCopying>
{
    float mDash;
    float mSpace;
}

+ (void)addStopWithDash:(float)arg1 space:(float)arg2 toArray:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (float)space;
- (float)dash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithDash:(float)arg1 space:(float)arg2;

@end
