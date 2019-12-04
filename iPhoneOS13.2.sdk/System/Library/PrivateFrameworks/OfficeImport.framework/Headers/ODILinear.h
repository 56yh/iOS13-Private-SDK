//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ODIState;

__attribute__((visibility("hidden")))
@interface ODILinear : NSObject
{
    _Bool mIsHorizontal;
    _Bool mWithConnectors;
    _Bool mStretch;
    float mPointHeight;
    float mConnectorWidth;
    float mPadding;
    _Bool mIsTextCenteredHorizontally;
    _Bool mIsTextCenteredVertically;
    unsigned int mMaxPointCount;
    ODIState *mState;
}

+ (void)mapUnknownWithState:(id)arg1;
+ (_Bool)mapIdentifier:(id)arg1 state:(id)arg2;
- (void)mapStyleFromTransition:(id)arg1 shape:(id)arg2;
- (void)mapTransition:(id)arg1 pointBounds:(struct CGRect)arg2;
- (void)mapStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapPoint:(id)arg1 bounds:(struct CGRect)arg2;
- (void)nextPointBounds:(struct CGRect *)arg1;
- (void)setLogicalBounds;
- (void)map;
- (void)setMaxPointCount:(unsigned int)arg1;
- (void)setIsTextCenteredVertically:(_Bool)arg1;
- (void)setIsTextCenteredHorizontally:(_Bool)arg1;
- (void)setIsTextCentered:(_Bool)arg1;
- (void)setPadding:(float)arg1;
- (void)setConnectorWidth:(float)arg1;
- (void)setPointHeight:(float)arg1;
- (void)setStretch:(_Bool)arg1;
- (void)setWithConnectors:(_Bool)arg1;
- (void)setIsHorizontal:(_Bool)arg1;
- (id)initWithState:(id)arg1;

@end

