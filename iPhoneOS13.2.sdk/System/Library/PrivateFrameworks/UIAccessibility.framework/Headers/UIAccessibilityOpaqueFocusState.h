//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface UIAccessibilityOpaqueFocusState : NSObject
{
    _Bool _hasFocus;
    _Bool _hasBeenReused;
    id _element;
    UIView *_reusableView;
    struct CGRect _sceneRelativeFrame;
}

@property(nonatomic) _Bool hasBeenReused; // @synthesize hasBeenReused=_hasBeenReused;
@property(retain, nonatomic) UIView *reusableView; // @synthesize reusableView=_reusableView;
@property(nonatomic) struct CGRect sceneRelativeFrame; // @synthesize sceneRelativeFrame=_sceneRelativeFrame;
@property(nonatomic) _Bool hasFocus; // @synthesize hasFocus=_hasFocus;
@property(nonatomic) __weak id element; // @synthesize element=_element;
- (id)description;

@end

