//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, UIView, UIVisualEffectView, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIInteractiveHighlightViewRecord : NSObject
{
    UIView *_view;
    UIView *_superview;
    UIVisualEffectView *_effectView;
    _UIPortalView *_portalView;
    NSHashTable *_interactiveHighlightEffects;
}

@property(retain, nonatomic) NSHashTable *interactiveHighlightEffects; // @synthesize interactiveHighlightEffects=_interactiveHighlightEffects;
@property(retain, nonatomic) _UIPortalView *portalView; // @synthesize portalView=_portalView;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) __weak UIView *superview; // @synthesize superview=_superview;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;

@end

