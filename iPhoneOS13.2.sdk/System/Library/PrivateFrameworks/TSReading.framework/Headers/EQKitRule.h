//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/EQKitBox.h>

@interface EQKitRule : EQKitBox
{
    double mHeight;
    double mDepth;
    double mWidth;
    struct CGColor *mCGColor;
}

@property(readonly, nonatomic) struct CGColor *color; // @synthesize color=mCGColor;
@property(readonly, nonatomic) double width; // @synthesize width=mWidth;
@property(readonly, nonatomic) double depth; // @synthesize depth=mDepth;
@property(readonly, nonatomic) double height; // @synthesize height=mHeight;
- (id)description;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithHeight:(double)arg1 depth:(double)arg2 width:(double)arg3 cgColor:(struct CGColor *)arg4;

@end

