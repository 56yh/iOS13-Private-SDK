//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, UIColor;

@interface HKGradient : NSObject <NSCopying>
{
    NSArray *_colors;
    NSArray *_locations;
}

+ (id)defaultGradient;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToHKGradient:(id)arg1;
@property(readonly, nonatomic) UIColor *bottomColor;
@property(readonly, nonatomic) UIColor *topColor;
- (id)initWithTopColor:(id)arg1 bottomColor:(id)arg2;
- (id)initWithColors:(id)arg1 locations:(id)arg2;

@end
