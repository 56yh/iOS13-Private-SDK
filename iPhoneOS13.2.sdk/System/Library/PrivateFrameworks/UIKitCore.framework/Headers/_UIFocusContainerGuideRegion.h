//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIFocusGuideRegion.h>

@protocol _UIFocusRegionContainer;

@interface _UIFocusContainerGuideRegion : _UIFocusGuideRegion
{
    id <_UIFocusRegionContainer> _contentFocusRegionContainer;
}

@property(nonatomic) __weak id <_UIFocusRegionContainer> contentFocusRegionContainer; // @synthesize contentFocusRegionContainer=_contentFocusRegionContainer;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (id)_visualRepresentationColor;
- (unsigned long long)_focusableBoundaries;
- (id)_fallbackFocusItemForMovementRequest:(id)arg1 inFocusMap:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
