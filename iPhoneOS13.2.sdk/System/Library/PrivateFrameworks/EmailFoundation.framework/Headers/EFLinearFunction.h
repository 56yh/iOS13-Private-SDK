//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EFLinearFunction : NSObject
{
    double _slope;
    double _intercept;
}

@property(nonatomic) double intercept; // @synthesize intercept=_intercept;
@property(nonatomic) double slope; // @synthesize slope=_slope;
- (double)evaluateReverse:(double)arg1;
- (double)evaluateX:(double)arg1;
- (id)initWithLineThroughPoints:(id)arg1;
- (id)initWithSlope:(double)arg1 intercept:(double)arg2;

@end

