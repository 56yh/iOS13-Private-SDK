//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UITraitCollection;

@interface NUFeedSettings : NSObject
{
    UITraitCollection *_traitCollection;
    struct CGRect _bounds;
}

@property(readonly, copy, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (id)initWithBounds:(struct CGRect)arg1 traitCollection:(id)arg2;

@end

