//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UINavigationBarTitleViewOverlayRects : NSObject
{
    CGRect _backButtonRect;
    CGRect _leadingItemsRect;
    CGRect _titleRect;
    CGRect _trailingItemsRect;
}

@property(nonatomic) CGRect trailingItemsRect; // @synthesize trailingItemsRect=_trailingItemsRect;
@property(nonatomic) CGRect titleRect; // @synthesize titleRect=_titleRect;
@property(nonatomic) CGRect leadingItemsRect; // @synthesize leadingItemsRect=_leadingItemsRect;
@property(nonatomic) CGRect backButtonRect; // @synthesize backButtonRect=_backButtonRect;
- (id)description;
- (id)asArray;
- (void)reset;
- (id)init;

@end
