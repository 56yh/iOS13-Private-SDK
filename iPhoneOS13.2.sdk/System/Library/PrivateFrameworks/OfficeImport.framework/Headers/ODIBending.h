//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODIBending : NSObject
{
    float mSpaceWidth;
    float mSpaceHeight;
    _Bool mWithArrows;
    float mRectHeight;
    unsigned int mMaxNodeCount;
    unsigned int mMaxColumnCount;
}

+ (_Bool)mapIdentifier:(id)arg1 state:(id)arg2;
+ (unsigned int)mapLogicalBoundsWithShapeSize:(struct CGSize)arg1 spaceSize:(struct CGSize)arg2 maxNodeCount:(unsigned int)arg3 maxColumnCount:(unsigned int)arg4 state:(id)arg5;
- (void)mapWithState:(id)arg1;
- (void)setMaxColumnCount:(unsigned int)arg1;
- (void)setMaxNodeCount:(unsigned int)arg1;
- (void)setRectHeight:(float)arg1;
- (id)initWithArrows:(_Bool)arg1;

@end

